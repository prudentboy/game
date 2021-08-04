#ifndef GAME_CONSOLE_FRIDAY_STATE_HP_STATE_H
#define GAME_CONSOLE_FRIDAY_STATE_HP_STATE_H

namespace game {
namespace console {
namespace friday {

class FridayHPState {
public:
    FridayHPState() : current_hp_(20), max_hp_limit_(22), min_hp_allowed_(0) {}
    FridayHPState(int8_t cur, int8_t mx, int8_t mn) : current_hp_(cur), max_hp_limit_(mx), min_hp_allowed_(mn) {}

private:
    int8_t current_hp_;
    const int8_t max_hp_limit_;
    const int8_t min_hp_allowed_;
};

}
}
}
#endif  // GAME_CONSOLE_FRIDAY_STATE_HP_STATE_H