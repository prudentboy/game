#ifndef 24_GAME_POINT_H
#define 24_GAME_POINT_H

namespace game
{

class TwentyFourPoint
{
public:
    TwentyFourPoint();
    ~TwentyFourPoint();
    Init();
    Init();
    Start();
private:
    unsigned int _retry_cnt;
    unsigned int _game_cnt;
    std::string _game_mode;
    bool _show_answer;
    bool _filter_no_solution;
}

}

#endif
