#ifndef GAME_CONSOLE_FRIDAY_BAN_HIGHEST_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_BAN_HIGHEST_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayBanHighestCardSkill : public SkillBase {
public:
    FridayBanHighestCardSkill() = default;
    FridayBanHighestCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayBanHighestCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayBanHighestCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayBanHighestCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_BAN_HIGHEST_CARD_SKILL_H