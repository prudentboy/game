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
    CardBase(const char* description) : description_(description) {}
    CardBase(const std::string& description) : description_(description) {}
    CardBase(std::string&& description) : description_(std::move(description)) {}
    virtual ~CardBase() = default;

private:
    std::string description_;
};

}  // element
}  // console
}  // game


#endif // GAME_CONSOLE_FRIDAY_CARDBASE_H