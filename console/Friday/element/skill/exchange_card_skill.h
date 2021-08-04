#ifndef GAME_CONSOLE_FRIDAY_EXCHANGE_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_EXCHANGE_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class ExchangeCardSkill : public SkillBase {
public:
    FridayExchangeCardSkill() = default;
    FridayExchangeCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayExchangeCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayExchangeCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayExchangeCardSkill() = default;

private:
    uint8_t card_num_;
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_EXCHANGE_CARD_SKILL_H