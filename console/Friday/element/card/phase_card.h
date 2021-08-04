#ifndef GAME_CONSOLE_FRIDAY_PHASE_CARD_H
#define GAME_CONSOLE_FRIDAY_PHASE_CARD_H

#include "card_base.h"

namespace game {
namespace console {
namespace friday {

class FridayPhaseCard : public CardBase {
public:
    FridayPhaseCard() = default;
    FridayPhaseCard(const std::string& name, const std::string& description) : CardBase(name, description) {}
    FridayPhaseCard(std::string&& name, std::string&& description) : CardBase(std::move(name), std::move(description)) {}
    FridayPhaseCard(const char* name, const char* description) : CardBase(name, description) {}
    ~FridayPhaseCard() = default;

    int Init(int phase) {
        phase_ = phase;
        return 0;
    }

private:
    int8_t phase_;
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_PHASE_CARD_H