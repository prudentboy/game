#ifndef GAME_CONSOLE_FRIDAY_CE_CHANGE_SKILL_H
#define GAME_CONSOLE_FRIDAY_CE_CHANGE_SKILL_H
#pragma once

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayCEChangeSkill : public SkillBase {
public:
    FridayCEChangeSkill() = default;
    FridayCEChangeSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayCEChangeSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayCEChangeSkill(const char* name, const char* description) : SkillBase(name, description) {}
    virtual ~FridayCEChangeSkill() = default;

    int Init(int ce_delta) {
        ce_delta_ = ce_delta;
        return 0;
    }

private:
    int8_t ce_delta_;
};

}
}
}
#endif  // GAME_CONSOLE_FRIDAY_CE_CHANGE_SKILL_H