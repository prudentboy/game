/**
 * @file 24_point_game.cpp
 * @brief 24点游戏类实现
 * @author Pboy <prudent_boy@163.com>
 */

#include "24_point_game.h"
#include "generate_question.h"

namespace game
{

TwentyFourPoint::TwentyFourPoint() {}
TwentyFourPoint::~TwentyFourPoint() {}

int TwentyFourPoint::Init()
{
    return Init("classic", 1, 0, false, false);
}

int TwentyFourPoint::Init(const std::string& mode,
            unsigned int retry, unsigned int game,
	    bool show_ans, bool filter_on) :
	    retry_cnt_(retry),  game_cnt_(game),
	    show_answer_(show_ans), filter_no_solution_(filter_on)
{
    for (auto i = 0; i < 4; ++i)
    {
        question_[i] = 0;
    }

    if (mode != "classic")
    {
	std::cout << "[ERROR]Game init fail: Unknown node."
		  << std::endl;
        return -1;
    }

    game_mode_name_ = mode;
    game_mode_ = 0;
    return 0;
}

void TwentyFourPoint::PrintStartInfo()
{
    std::cout << "Welcome to 24-point Game"
	      << std::endl;
}

void TwentyFourPoint::Start()
{
    PrintStartInfo();
    if (game_cnt == 0)
    {
	while (true)
	{
	    if (SingleGameWrapper() != 0) break;
	}
    }
    else
    {
	int play_cnt = game_cnt_;
	while (play_cnt > 0)
	{
	    if (SingleGameWrapper() != 0) break;
	    --play_cnt;
	}
    }
    PrintEndInfo();
    return;
}

void TwentyFourPoint::PrintEndInfo()
{
    std::cout << "Thanks for playing 24 point."
	      << std::endl;
}

void TwentyFourPoint::SingleGameWrapper()
{
    std::vector<int>
}

}

