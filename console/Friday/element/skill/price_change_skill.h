#ifndef GAME_CONSOLE_FRIDAY_PRICE_CHANGE_SKILL_H
#define GAME_CONSOLE_FRIDAY_PRICE_CHANGE_SKILL_H
#pragma once

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayPriceChangeSkill : public SkillBase {
public:
    FridayPriceChangeSkill() = default;
    FridayPriceChangeSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayPriceChangeSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayPriceChangeSkill(const char* name, const char* description) : SkillBase(name, description) {}
    virtual ~FridayPriceChangeSkill() = default;

    int Init(int price) {
        price_ = price;
        return 0;
    }

private:
    int8_t price_;
};

}
}
}
#endif  // GAME_CONSOLE_FRIDAY_PRICE_CHANGE_SKILL_H