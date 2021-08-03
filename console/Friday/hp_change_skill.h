#ifndef GAME_CONSOLE_FRIDAY_HP_CHANGE_SKILL_H
#define GAME_CONSOLE_FRIDAY_HP_CHANGE_SKILL_H
#pragma once

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayHPChangeSkill : public SkillBase {
public:
    FridayHPChangeSkill() = default;
    FridayHPChangeSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayHPChangeSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayHPChangeSkill(const char* name, const char* description) : SkillBase(name, description) {}
    virtual ~FridayHPChangeSkill() = default;

    int Init(int hp_delta) {
        hp_delta_ = hp_delta;
        return 0;
    }

private:
    int8_t hp_delta_;
};

}
}
}
#endif  // GAME_CONSOLE_FRIDAY_HP_CHANGE_SKILL_H