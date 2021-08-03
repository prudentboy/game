#ifndef GAME_CONSOLE_FRIDAY_IMITATE_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_IMITATE_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayImitateCardSkill : public SkillBase {
public:
    FridayImitateCardSkill() = default;
    FridayImitateCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayImitateCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayImitateCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayImitateCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_IMITATE_CARD_SKILL_H