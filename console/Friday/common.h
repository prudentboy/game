#ifndef GAME_CONSOLE_FRIDAY_COMMON_H
#define GAME_CONSOLE_FRIDAY_COMMON_H
#pragma once

namespace game {
namespace console {
namespace friday {

enum FridayDifficulty {
    FRIDAY_DIFFICULTY_UNDEFINED = 0,
    FRIDAY_DIFFICULTY_BEGINNER = 1,
    FRIDAY_DIFFICULTY_NORMAL = 2,
    FRIDAY_DIFFICULTY_HARD = 3,
    FRIDAY_DIFFICULTY_EXPERT = 4,
};
}

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
