#ifndef 24_GAME_POINT_H
#define 24_GAME_POINT_H

namespace game
{

class TwentyFourPoint
{
private:
    unsigned int retry_cnt_;
    unsigned int game_cnt_;
    unsigned int game_mode_;
    std::string game_mode_name_;
    bool show_answer_;
    bool filter_no_solution_;
public:
    TwentyFourPoint();
    ~TwentyFourPoint();
    Init();
    Init(const std::string& mode,
         unsigned int retry, unsigned int game,
         bool show_ans, bool filter_on);
    Start();
private:
    void SingleGameWrapper();
    void PrintStartInfo();
    void PrintEndInfo();
    void PrintSuccessInfo();
    void PrintFailInfo();
    void GenerateQuestion();
    bool IsValidInput(const std::string& input);
    double GetInputAnswer(const std::string& input);
}

}

#endif
