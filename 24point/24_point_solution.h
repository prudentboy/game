#include <string>
#include <vector>

#ifndef TWENTYFOUR_GAME_SOLUTION_H
#define TWENTYFOUR_GAME_SOLUTION_H

namespace game
{

class TwentyFourSolver
{
public:
    static bool HasSolution(const std::vector<double>& question, std::string& ans);
};

}

#endif
