#ifndef GAME_CONSOLE_FRIDAY_DUPLICATE_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_DUPLICATE_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayDuplicateCardSkill : public SkillBase {
public:
    FridayDuplicateCardSkill() = default;
    FridayDuplicateCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayDuplicateCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayDuplicateCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayDuplicateCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_DUPLICATE_CARD_SKILL_H