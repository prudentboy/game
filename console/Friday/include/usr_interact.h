#pragma once

#include <string>

namespace game {
namespace console {
namespace friday {

void ClearScreen();
void Welcome();
void GoodBye();
void Congradulation(const std::string&);
int GetLevel();
int AskForOneMoreGame();

}
}
}
