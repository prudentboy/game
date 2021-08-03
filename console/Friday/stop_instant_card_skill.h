#ifndef GAME_CONSOLE_FRIDAY_STOP_INSTANT_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_STOP_INSTANT_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayStopInstantCardSkill : public SkillBase {
public:
    FridayStopInstantCardSkill() = default;
    FridayStopInstantCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayStopInstantCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayStopInstantCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayStopInstantCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_STOP_INSTANT_CARD_SKILL_H