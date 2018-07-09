#include <vector>
#include "generate_question.h"

std::vector<int> GenerateQuestion(int n)
{
    std::vector<int> number_list;
    srand(time(NULL));
    for (int i = 0; i < n; ++i)
    {
        number_list.push_back(rand() % 9 + 1);
    }
    return number_list;
}

int GenerateNumber()
{
    return rand() % 9 + 1;
}
