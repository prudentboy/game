#include <string>
#include <unistd.h>
#include <iostream>

namespace game {
namespace console {
namespace friday {

constexpr char get_language_info[] = "请选择语言：";
constexpr char welcome_info[] = "Welcome.";
constexpr char goodbye_info[] = "Thanks for playing Friday.";
constexpr char get_input_info[] = "Please input level: ";

void ClearScreen() {
    system("clear");
}

void Welcome() {
    printf("%s\n", welcome_info);
}

void GoodBye() {
    printf("%s\n", goodbye_info);
}

void Congradulation(const std::string& result) {
    printf("You win! Congradulation!\nHere is your result:\n");
    printf("%s\n", result.c_str());
}

int GetLevel() {
    printf("Please choose game level you wanna challenge:");
    int ret = -1;
    std::cin >> ret;
    printf("\n");
    return ret;
}

int AskForOneMoreGame() {
    printf("Would you wanna start one more Friday game(y/n)?");
    int ret = -1;
    std::cin >> ret;
    printf("\n");
    return ret;
}

}
}
}
