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
    FridayHPChangeSkill(const std::string& name, const std::string& description, int8_t hp_delta = 0) : SkillBase(name, description), hp_delta_(hp_delta) {}
    FridayHPChangeSkill(std::string&& name, std::string&& description, int8_t hp_delta = 0) : SkillBase(std::move(name), std::move(description)), hp_delta_(hp_delta) {}
    FridayHPChangeSkill(const char* name, const char* description, int8_t hp_delta = 0) : SkillBase(name, description), hp_delta_(hp_delta) {}
    virtual ~FridayHPChangeSkill() = default;
private:
    int8_t hp_delta_;
};

}
}
}
#endif  // GAME_CONSOLE_FRIDAY_HP_CHANGE_SKILL_H