#ifndef VRGAME_H
#define VRGAME_H

#include <string>
#include <vector>
#include "VRAchievementTracker.h"
#include "VRChatSystem.h"
#include "Actor.h"

using namespace std;

class VRGame {
private:

    string title;
    string genre;

    VRChatSystem ChatSystem;
    VRAchievementTracker AchievementTracker; 

    vector<Actor> actors;

public:

    VRGame(const string& gameTitle, const string& gameGenre);

    void startGame();
    void endGame();
    void pauseGame();
    void updateGame();
    string getTitle() const;
    string getGenre() const;
    int getDifficultyLevel() const;

};

#endif 