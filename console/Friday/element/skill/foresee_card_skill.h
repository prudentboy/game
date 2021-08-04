#ifndef GAME_CONSOLE_FRIDAY_FORESEE_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_FORESEE_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayForeseeCardSkill : public SkillBase {
public:
    FridayForeseeCardSkill() = default;
    FridayForeseeCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayForeseeCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayForeseeCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayForeseeCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_FORESEE_CARD_SKILL_H