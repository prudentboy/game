#include "24_point_solution.h"
#include <iostream>
#include <cmath>

namespace game
{

const double kTarget = 24.0;
const double kThreshold = 1E-10;

bool TwentyFourSolver::HasSolution(const std::vector<double>& question, std::string& ans)
{
    if (question.empty())
    {
        ans.clear();
        return false;
    }

    if (question.size() == 1)
    {
        return (abs(question[0] - kTarget) < kThreshold);
    }

    for (auto iter = question.begin(); iter != question.end() - 1; ++iter)
    {
        for (auto iter_in = iter + 1; iter_in != question.end(); ++iter_in)
        {
            std::vector<double> tmp;
            for (auto iter_tmp = question.begin(); iter_tmp != question.end(); ++iter_tmp)
            {
                if (iter_tmp != iter && iter_tmp != iter_in)
                {
                    tmp.push_back(*iter_tmp);
                }
            }
            tmp.push_back((*iter) + (*iter_in));
            if (HasSolution(tmp, ans)) 
            {
                //std::cout << '(' << *iter << '+' << *iter_in << ')' << std::endl;
                return true;
            }

            tmp.pop_back();
            tmp.push_back((*iter) * (*iter_in));
            if (HasSolution(tmp, ans)) 
            {
                //std::cout << '(' << *iter << '*' << *iter_in << ')' << std::endl;
                return true;
            }
            if (HasSolution(tmp, ans)) return true;

            tmp.pop_back();
            tmp.push_back((*iter) - (*iter_in));
            if (HasSolution(tmp, ans)) 
            {
                //std::cout << '(' << *iter << '-' << *iter_in << ')' << std::endl;
                return true;
            }

            tmp.pop_back();
            tmp.push_back((*iter_in) - (*iter));
            if (HasSolution(tmp, ans)) 
            {
                //std::cout << '(' << *iter_in << '-' << *iter << ')' << std::endl;
                return true;
            }

            tmp.pop_back();
            tmp.push_back((*iter) / (*iter_in));
            if (HasSolution(tmp, ans)) 
            {
                //std::cout << '(' << *iter << '/' << *iter_in << ')' << std::endl;
                return true;
            }

            tmp.pop_back();
            tmp.push_back((*iter_in) / (*iter));
            if (HasSolution(tmp, ans)) 
            {
                //std::cout << '(' << *iter_in << '/' << *iter << ')' << std::endl;
                return true;
            }
        }
    }
    return false;
}

}

