#ifndef GAME_CONSOLE_FRIDAY_PIRATE_CARD_H
#define GAME_CONSOLE_FRIDAY_PIRATE_CARD_H

#include "card_base.h"

namespace game {
namespace console {
namespace friday {

class FridayPirateCard : public CardBase {
public:
    FridayPirateCard() = default;
    FridayPirateCard(const std::string& name, const std::string& description) : CardBase(name, description) {}
    FridayPirateCard(std::string&& name, std::string&& description) : CardBase(std::move(name), std::move(description)) {}
    FridayPirateCard(const char* name, const char* description) : CardBase(name, description) {}
    ~FridayPirateCard() = default;

    int Init(int free_num, const std::vector<int8_t>& cvs, SkillType skill_type) {
        free_num_ = free_num;
        challange_value_ = cvs;
        if (skill_type != NULL_SKILL) {
            skill_ptr_.reset(CreateSkill(skill_type));
        }
        return 0;
    }

    int Init(int free_num, std::vector<int8_t>&& cvs, SkillType skill_type) {
        free_num_ = free_num;
        challange_value_ = std::move(cvs);
        if (skill_type != NULL_SKILL) {
            skill_ptr_.reset(CreateSkill(skill_type));
        }
        return 0;
    }

private:
    int8_t free_num_;
    std::vector<int8_t> challange_value_;
    std::unique_ptr<SkillBase> skill_ptr_;
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_PIRATE_CARD_H