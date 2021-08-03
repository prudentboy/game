#ifndef GAME_CONSOLE_FRIDAY_ADD_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_ADD_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayAddCardSkill : public SkillBase {
public:
    FridayAddCardSkill() = default;
    FridayAddCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayAddCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayAddCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayAddCardSkill() = default;

    int Init(int num) {
        card_num_ = num;
        return 0;
    }

private:
    uint8_t card_num_;
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_ADD_CARD_SKILL_H