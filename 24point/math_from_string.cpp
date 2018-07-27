#include <set>
#include <stack>
#include <vector>
#include <iostream>

#include "math_from_string.h"

namespace base
{

const char kValidExp[] = {'+', '-', '*', '/', '(', ')'};
std::set<char> ValidExpSet(kValidExp, kValidExp + 6);

int MathFromString::SimpleMath(const std::string& str)
{
    //std::cout << "[DEBUG] Input: " << str << std::endl;
    std::string trim_str(RemoveAllBlank(str));
    //std::cout << "[DEBUG] After Trim: " << trim_str << std::endl;

    std::vector<MathExpUni> union_vec;
    std::stack<char> exp_stack;
    //int tmp = 0;
    MathExpUni tmp_uni;
    for(size_t i = 0; i < trim_str.size(); ++i)
    {
        if (isdigit(trim_str[i]))
        {
            //tmp = tmp * 10 + (trim_str[i] - '0');
            tmp_uni.number = trim_str[i] - '0';
            union_vec.push_back(tmp_uni);
        }
        else if (ValidExpSet.find(trim_str[i]) != ValidExpSet.end())
        {
            if (trim_str[i] == '(')
            {
                exp_stack.push(trim_str[i]);
            }
            else if (trim_str[i] == ')')
            {
                while(!exp_stack.empty() && exp_stack.top() != '(')
                {
                    tmp_uni.exp = exp_stack.top();
                    union_vec.push_back(tmp_uni);
                    exp_stack.pop();
                }
                if (!exp_stack.empty() && exp_stack.top() == '(')
                {
                    exp_stack.pop();
                }
            }
            else
            {
		while (!exp_stack.empty() && exp_stack.top() != '(' && (HigherNEqualPriority(exp_stack.top(), trim_str[i])))
		{
		    tmp_uni.exp = exp_stack.top();
		    union_vec.push_back(tmp_uni);
		    exp_stack.pop();
		}
		exp_stack.push(trim_str[i]);
	    }
        }
        else
        {
            std::cout << trim_str[i];
            std::cout << "[ERROR] Unvalid char in input." << std::endl;
            return -1;
        }
    }
    while (!exp_stack.empty())
    {
	tmp_uni.exp = exp_stack.top();
	union_vec.push_back(tmp_uni);
	exp_stack.pop();
    }
    std::stack<int> cal_stack;
    int tmpa = 0, tmpb = 0;
    for (auto iter = union_vec.begin(); iter != union_vec.end(); ++iter)
    {
        //std::cout << "[DEBUG] union_vec: " << iter->number << " " << iter->exp << std::endl;
        if (iter->number < 10)
        {
            cal_stack.push(iter->number);
        }
        else if (ValidExpSet.find(iter->exp) != ValidExpSet.end())
        {
            tmpa = cal_stack.top();
            cal_stack.pop();
            tmpb = cal_stack.top();
            cal_stack.pop();
            switch (iter->exp)
            {
                case '+':
                    cal_stack.push(tmpa + tmpb);
                    break;
                case '-':
                    cal_stack.push(tmpb - tmpa);
                    break;
                case '*':
                    cal_stack.push(tmpa * tmpb);
                    break;
                case '/':
                    cal_stack.push(tmpb / tmpa);
                    break;
            }
            //std::cout << cal_stack.top() << std::endl;
        }
        else
        {
            std::cout << "[ERROR] input wrong." << std::endl;
            return -1;
        }
    }

    return cal_stack.top();
}

std::string MathFromString::RemoveAllBlank(const std::string& str)
{
    if (str.empty())
    {
        return "";
    }
    std::string opt(str);
    auto index = opt.find(" ");
    while (index != std::string::npos)
    {
        opt.replace(index, 1, "");
        index = opt.find(" ", index);
    }
    
    return opt;
}

bool MathFromString::HigherNEqualPriority(const char& left, const char& right)
{
    if ((left == '+' || left == '-') && (right == '*' || right == '/'))
    {
        return false;
    }
    return true;
}

}
