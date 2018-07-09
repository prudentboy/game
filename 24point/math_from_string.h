#ifndef MATH_FROM_STRING_H
#define MATH_FROM_STRING_H

#include <string>

namespace base
{

class MathFromString
{

union MathExpUni
{
    char exp;
    int number;
};

public:
    static int SimpleMath(const std::string& str);
    static std::string RemoveAllBlank(const std::string& str);
    static bool HigherNEqualPriority(const char& left, const char& right);
};

} //namespace base

#endif //MATH_FROM_STRING_H
