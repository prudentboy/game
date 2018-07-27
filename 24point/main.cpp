// Copyright [2018] <Pboy>

#include <iostream>
#include "generate_question.h"
#include "math_from_string.h"

bool IsSameNumber(const std::string& input, const std::vector<int>& question);

int main()
{
    /*
    std::cout << base::MathFromString::SimpleMath \
                 ("5/1+ 9  - 3*2") << std::endl;
    */
    while (true)
    {
        std::vector<int> question(GenerateQuestion());
        std::cout << "Here is the question for you" \
                     "(input q/Q if you want to quit):" << std::endl;
        for (auto iter = question.begin(); iter != question.end(); ++iter)
        {
            std::cout << *iter << " ";
        }
        std::cout << std::endl;
        std::string str;
        getline(std::cin, str);
        if (str == "q" || str == "Q")
        {
            break;
        }
        if (!IsSameNumber(str, question))
        {
            std::cout << "Input Error. Please check." << std::endl;
        }
        else
        {
        if (base::MathFromString::SimpleMath(str) == 24)
        {
            std::cout << "Congradulation! You've got 24!" << std::endl;
        }
        else
        {
            std::cout << "Your express is equal to " \
                      << base::MathFromString::SimpleMath(str) \
                      << " instead of 24..." << std::endl;
        }
    }
    }
    return 0;
}

bool IsSameNumber(const std::string& input, const std::vector<int>& question)
{
    int number_dict[10]={0};
    for (auto i = question.begin(); i != question.end(); ++i)
    {
        number_dict[*i]++;
    }
    for (auto i = input.begin(); i != input.end(); ++i)
    {
        switch (*i)
        {
            case ' ': case '+': case '-': case '*':
            case '/': case '(': case ')':
                 continue;
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                 number_dict[*i-'0']--;
                 break;
            default:
                 return false;
        }
    }
    for (auto i = 0; i < 10; ++i)
    {
        if (number_dict[i] != 0) return false;
    }
    return true;
}
