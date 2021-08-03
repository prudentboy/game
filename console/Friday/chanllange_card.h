#ifndef GAME_CONSOLE_FRIDAY_CHANLLANGE_CARD_H
#define GAME_CONSOLE_FRIDAY_CHANLLANGE_CARD_H

#include "combat_card.h"
#include "pirate_card.h"

namespace game {
namespace console {
namespace friday {

class FridayChanllangeCard : public CardBase {
public:
    FridayChanllangeCard() = default;
    ~FridayChanllangeCard() = default;

private:
    FridayCombatCard combat_;
    FridayPirateCard pirate_;
};

}
}
}
#endif  // GAME_CONSOLE_FRIDAY_CHANLLANGE_CARD_H