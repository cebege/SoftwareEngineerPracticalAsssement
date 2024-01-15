#include "GameSettingsSingleton.h"

// Initialize the static instance
GameSettingsSingleton* GameSettingsSingleton::instance = nullptr;

// Private constructor
GameSettingsSingleton::GameSettingsSingleton() : difficultyLevel(1) { // Default difficulty level
}

GameSettingsSingleton* GameSettingsSingleton::getInstance() {
    if (instance == nullptr) {
        instance = new GameSettingsSingleton();
    }
    return instance;
}

int GameSettingsSingleton::getDifficultyLevel() const {
    return difficultyLevel;
}

void GameSettingsSingleton::setDifficultyLevel(int level) {
    difficultyLevel = level;
}