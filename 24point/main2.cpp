#include <iostream>
#include "24_point_solution.h"

int main()
{
    std::vector<double> question(4, 0);
    /*
    double num;
    for (int i = 0; i < 4; ++i)
    {
        std::cin >> num;
        question.push_back(num);
    }
    for (int i = 0; i < question.size(); ++i)
    {
        std::cout << question[i] << " ";
    }
    std::cout << std::endl;
    */

    std::string ans;
    int cnt = 0;
    for (int i = 1; i < 10; ++i)
    for (int j = 1; j < 10; ++j)
    for (int k = 1; k < 10; ++k)
    for (int l = 1; l < 10; ++l)
    {
        question[0] = i;
        question[1] = j;
        question[2] = k;
        question[3] = l;
        if (game::TwentyFourSolver::HasSolution(question, ans))
        {
            //std::cout << "has answer." << std::endl;
        }
        else
        {
            std::cout << ++cnt << ": " << i << " " << j << " " << k << " " << l << std::endl;
        }
    }
    return 0;
}

