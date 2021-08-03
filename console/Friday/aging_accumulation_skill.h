#ifndef GAME_CONSOLE_FRIDAY_AGING_ACCUMULATION_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_AGING_ACCUMULATION_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayAgingAccumulationCardSkill : public SkillBase {
public:
    FridayAgingAccumulationCardSkill() = default;
    FridayAgingAccumulationCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayAgingAccumulationCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayAgingAccumulationCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayAgingAccumulationCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_AGING_ACCUMULATION_CARD_SKILL_H