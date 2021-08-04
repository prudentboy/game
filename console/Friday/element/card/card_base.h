// Copyright(c) 2021 present, prudentboy

#ifndef GAME_CONSOLE_FRIDAY_CARDBASE_H
#define GAME_CONSOLE_FRIDAY_CARDBASE_H
#pragma once

#include <string>

namespace game {
namespace console {
namespace element {

class CardBase {
public:
    CardBase() = default;
    CardBase(const std::string& name, const std::string& description) : name_(name), description_(description) {}
    CardBase(std::string&& name, std::string&& description) : name_(name), description_(std::move(description)) {}
    CardBase(const char* description) : name_(name), description_(description) {}
    virtual ~CardBase() = default;

private:
    std::string name_;
    std::string description_;
};

}  // element
}  // console
}  // game


#endif // GAME_CONSOLE_FRIDAY_CARDBASE_H