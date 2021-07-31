#ifndef GAME_CONSOLE_FRIDAY_COMBAT_CARD_H
#define GAME_CONSOLE_FRIDAY_COMBAT_CARD_H

#include "card.h"

#include <memory>

namespace game {
namespace console {
namespace friday {

class FridayFightingCard : public CardBase {
public:
    FridayFightingCard() = default;
    virtual ~FridayFightingCard() = default;

private:
    int8_t combat_effectiveness_;
    std::unique_ptr<element::SkillBase> skill_;
};

}  // friday
}  // console
}  // game

#endif  // GAME_CONSOLE_FRIDAY_COMBAT_CARD_H