#ifndef GAME_CONSOLE_FRIDAY_HALF_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_HALF_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayHalfCardSkill : public SkillBase {
public:
    FridayHalfCardSkill() = default;
    FridayHalfCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayHalfCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayHalfCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayHalfCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_HALF_CARD_SKILL_H