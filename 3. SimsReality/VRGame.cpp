#include "VRGame.h"
#include "Actor.h"
#include "VRAchievementTracker.h"
#include "VRChatSystem.h"
#include "GameSettingsSingleton.h"

int main()
{

}

VRGame::VRGame(const string& gameTitle, const string& gameGenre)
    : title(gameTitle), genre(gameGenre) {}


void VRGame::startGame() {
    
}

void VRGame::endGame() {
    
}

void VRGame::pauseGame() {


}

void VRGame::updateGame() {
    for (auto& actor : actors) {
        actor.updateActorState();
    }

    ChatSystem.broadcastMessage();

    AchievementTracker.checkAndUnlockAchievement();
}

string VRGame::getTitle() const {

    return title;
}

string VRGame::getGenre() const {

    return genre;
}

int VRGame::getDifficultyLevel() const {

    return GameSettingsSingleton::getInstance()->getDifficultyLevel();
}
