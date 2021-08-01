#ifndef GAME_CONSOLE_SKILL_BASE_H
#define GAME_CONSOLE_SKILL_BASE_H
#pragma once

#include <string>

#include "common.h"

namespace game {
namespace console {
namespace element {

union SkillParam {
    int8_t hp_delta;
};

class SkillBase {
public:
    SkillBase() = default;
    SkillBase(const std::string& name, const std::string& description) : name_(name), description_(description) {}
    SkillBase(std::string&& name, std::string&& description) : name_(std::move(name)), description_(std::move(description)) {}
    SkillBase(const char* name, const char* description) : name_(name), description_(description) {}
    virtual ~SkillBase() = default;

private:
    std::string name_;
    std::string description_;

public:
    static std::unique_ptr<SkillBase> CreateSkill(SkillType type, SkillParam param);
};

}
}
}
#endif  // GAME_CONSOLE_SKILL_BASE_H