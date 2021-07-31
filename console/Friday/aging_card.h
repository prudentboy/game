#ifndef GAME_CONSOLE_FRIDAY_AGING_CARD_H
#define GAME_CONSOLE_FRIDAY_AGING_CARD_H

#include "card.h"

namespace game {
namespace console {
namespace friday {

class FridayAgingCard : public CardBase {
public:
    FridayAgingCard() = default;
    virtual ~FridayAgingCard() = default;
private:
    int8_t combat_effectiveness_;
};

}  // friday
}  // console
}  // game

#endif  // GAME_CONSOLE_FRIDAY_AGING_CARD_H