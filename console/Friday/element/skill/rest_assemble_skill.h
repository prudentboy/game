#ifndef GAME_CONSOLE_FRIDAY_REST_ASSEMBLE_CARD_SKILL_H
#define GAME_CONSOLE_FRIDAY_REST_ASSEMBLE_CARD_SKILL_H

#include "skill_base.h"

namespace game {
namespace console {
namespace friday {

class FridayRestAssembleCardSkill : public SkillBase {
public:
    FridayRestAssembleCardSkill() = default;
    FridayRestAssembleCardSkill(const std::string& name, const std::string& description) : SkillBase(name, description) {}
    FridayRestAssembleCardSkill(std::string&& name, std::string&& description) : SkillBase(std::move(name), std::move(description)) {}
    FridayRestAssembleCardSkill(const char* name, const char* description) : SkillBase(name, description) {}
    ~FridayRestAssembleCardSkill() = default;

    int Init() { return 0; }
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_REST_ASSEMBLE_CARD_SKILL_H