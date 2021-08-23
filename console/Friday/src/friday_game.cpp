#include <iostream>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "usr_interact.h"
#include <unistd.h>

int main() {
    using namespace game::console::friday;
    auto logger = spdlog::basic_logger_mt("basic_logger", "log/log.txt");
    logger->info("Program Friday start.");
    bool quit = false;
    do {
        ClearScreen();
        Welcome();
        int c = GetLevel();
        //FridayCore core(c);
        //c = core.Start();
        switch (c) {
            case 1:
                //Congradulation(core.Result());
                Congradulation(std::string("test result"));
                c = AskForOneMoreGame();
                printf("c is %d\n", c);
                if (c == 2) { quit = true; }
                break;
            case 2:
                quit = true;
                break;
            default:
                continue;
        }
    } while(!quit);
    GoodBye();
    logger->info("Program Friday end.");
    usleep(100);

    return 0;
}
