#ifndef GAME_CONSOLE_FRIDAY_COMMON_H
#define GAME_CONSOLE_FRIDAY_COMMON_H
#pragma once

namespace game {
namespace console {

enum CardType {
    NULL_CARDTYPE = 0,
    // Card types for game "Friday"
    FRIDAY_AGING_CARDTYPE,
    FRIDAY_ADVENTRUE_CARDTYPE,
    FRIDAY_FIGHTING_CARDTYPE,
    FRIDAY_PIRATE_CARDTYPE,
    FRIDAY_PHASE_CARDTYPE,
};

enum SkillType {
    NULL_SKILLTYPE = 0,
    // skill type for game "Friday"
    FRIDAY_REDUCE_HP_SKILLTYPE,
};

}
}

#endif  // GAME_CONSOLE_FRIDAY_COMMON_H
