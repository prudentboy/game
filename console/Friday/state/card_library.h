#ifndef GAME_CONSOLE_FRIDAY_CARD_LIBRARY
#define GAME_CONSOLE_FRIDAY_CARD_LIBRARY
#pragma once

#include "element/card/card_base.h"

namespace game {
namespace console {
namespace friday {

Class CardLibrary {
public:
    CardLibrary()
      : phase_library_({FridayPhaseCard("", "", 1),
                          FridayPhaseCard("", "", 2),
                          FridayPhaseCard("", "", 3)}),
        aging_library_(),
        fighting_library_(),
        pirate_library_(),
        chanlenge_library_() {}

    int Reset() {
        for (auto& phase : phase_library_) { phase.Reset(); }
        for (auto& aging : phase_library_) { aging.Reset(); }
        for (auto& fighting : phase_library_) { fighting.Reset(); }
        for (auto& pirate : phase_library_) { pirate.Reset(); }
        for (auto& chanlange : phase_library_) { chanllange.Reset(); }
        return 0;
    }

private:
    std::vector<FridayPhaseCard> phase_library_;
    std::vector<FridayFightingCard> aging_library_;
    std::vector<FridayFightingCard> fighting_library_;
    std::vector<FridayPirateCard> pirate_library_;
    std::vector<FridayChanlangeCard> chanlange_library_;
};

class FridayCardLibrarySingleton {
public:
    CardLibrary& GetCardLibraryRef() {
        static CardLibrary library;
        return library;
    }

    const CardLibrary& GetCardLibraryRef() {
        return const_cast<const CardLibrary&>(GetCardLibraryRef());
    }

    CardLibrary* GetCardLibraryPtr() {
        return &(GetCardLibraryRef());
    }

private:
    FridayCardLibrarySingleton(const FridayCardLibrarySingleton&) = delete;
    FridayCardLibrarySingleton& operator=(const FridayCardLibrarySingleton&) = delete;
};

}
}
}

#endif  // GAME_CONSOLE_FRIDAY_CARD_LIBRARY