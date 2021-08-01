#ifndef GAME_CONSOLE_FRIDAY_PHASE_CARD_H
#define GAME_CONSOLE_FRIDAY_PHASE_CARD_H

#include "card_base.h"

namespace game {
namespace console {
namespace friday {

class FridayPhaseCard : public CardBase {
public:
    FridayPhaseCard() = default;
    FridayPhaseCard(const std::string& name, const std::string& description, int8_t phase) : CardBase(name, description), phase_(phase) {}
    FridayPhaseCard(std::string&& name, std::string&& description, int8_t phase) : CardBase(std::move(name), std::move(description)), phase_(phase) {}
    FridayPhaseCard(const char* name, const char* description, int8_t phase) : CardBase(name, description), phase_(phase) {}
    ~FridayPhaseCard() = default;
private:
    int8_t phase_;
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_PHASE_CARD_H