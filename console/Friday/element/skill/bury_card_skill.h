#ifndef GAME_CONSOLE_FRIDAY_BURY_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_BURY_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayBuryCardSkill : public SkillBase {
public:
    FridayBuryCardSkill() = default;
    FridayBuryCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayBuryCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayBuryCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayBuryCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_BURY_CARD_SKILL_H