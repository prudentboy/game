#ifndef GAME_CONSOLE_FRIDAY_DESTROY_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_DESTROY_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayDestroyCardSkill : public SkillBase {
public:
    FridayDestroyCardSkill() = default;
    FridayDestroyCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayDestroyCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayDestroyCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayDestroyCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_DESTROY_CARD_SKILL_H