#ifndef GAME_CONSOLE_FRIDAY_PHASE_REDUCE_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_PHASE_REDUCE_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayPhaseReduceCardSkill : public SkillBase {
public:
    FridayPhaseReduceCardSkill() = default;
    FridayPhaseReduceCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayPhaseReduceCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayPhaseReduceCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayPhaseReduceCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_PHASE_REDUCE_CARD_SKILL_H