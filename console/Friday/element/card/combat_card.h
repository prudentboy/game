#ifndef GAME_CONSOLE_FRIDAY_COMBAT_CARD_H
#define GAME_CONSOLE_FRIDAY_COMBAT_CARD_H

#include "card_base.h"
#include "skill_base.h"

#include <memory>

namespace game {
namespace console {
namespace friday {

class FridayFightingCard : public CardBase {
public:
    FridayFightingCard() = default;
    FridayFightingCard(const std::string& name, const std::string& description, int8_t ce, int8_t cost, SkillType type, SkillParam param) : CardBase(name, description), combat_effectiveness_(ce), remove_cost_(cost), skill_ptr_(nullptr) {
        skill_ptr_.reset(CreateSkill(type, param));
    }
    FridayFightingCard(std::string&& name, std::string&& description, int8_t ce, int8_t cost, SkillType type, SkillParam param) : CardBase(std::move(name), std::move(description)), combat_effectiveness_(ce), remove_cost_(cost), skill_ptr_(nullptr) {
        skill_ptr_.reset(CreateSkill(type, param));
    }
    FridayFightingCard(const char* name, const char* description, int8_t ce, int8_t cost, SkillType type, SkillParam param) : CardBase(name, description), combat_effectiveness_(ce), remove_cost_(cost), skill_ptr_(nullptr) {
        skill_ptr_.reset(CreateSkill(type, param));
    }
    virtual ~FridayFightingCard() = default;

private:
    int8_t combat_effectiveness_;
    int8_t remove_cost_;
    std::unique_ptr<element::SkillBase> skill_ptr_;
};

}  // friday
}  // console
}  // game

#endif  // GAME_CONSOLE_FRIDAY_COMBAT_CARD_H