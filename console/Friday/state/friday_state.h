#ifndef GAME_CONSOLE_FRIDAY_STATE_H
#define GAME_CONSOLE_FRIDAY_STATE_H
#pragma once

#include "common.h"
#include "state/HP_state.h"
#include "state/card_library.h"

namespace game {
namespace console {
namespace friday {

class FridayState {
public:
    FridayState() = delete;
    explicit FridayState(FridayDifficulty difficulty, const FridayCardLibray& library) {}
    ~FridayState() = default;
    int Reset() { return 0; }

private:
    union ChanllangeCard {
        FridayPirateCard* pirate,
        FridayChangellengeCard* chanllange
    };
    union FightingCard {
        FridayFightingCard* fighting,
        FridayChanllengeCard* chanllenge
    };

private:
    FridayDifficulty defficulty_;
    FridayHPState hp_;
    ChanllangeCard chanllange_cur_;
    std::vector<FridayPhaseCard*> phase_;
    std::vector<FridayPirateCard*> pirate_cur_;
    std::vector<FridayPirateCard*> pirate_win_;
    std::vector<FridayPirateCard*> pirate_desposed_;
    std::vector<FridayFightingCard*> aging_library_;
    std::vector<FightingCard> fighting_library_;
    std::vector<FightingCard> fighting_used_;
    std::vector<FridayChanllangeCard*> chanllange_library_;
    std::vector<FridayChanllangeCard*> chanllange_used_;
    std::vector<FridayCard*> free_cards_;
    std::vector<FridayCard*> cost_cards_;
    std::vector<FightingCard> disposed_;

private:
    FridayState(const FridayState&) = delete;
    FridayState& operator=(const FridayState&) = delete;
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_STATE_H