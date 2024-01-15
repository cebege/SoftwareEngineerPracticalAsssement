#ifndef GAMESETTINGS_SINGLETON_H
#define GAMESETTINGS_SINGLETON_H

// The Singleton Design Pattern ensures that a class has only one instance and provides a global point of access to it. 
// In the context of VRGame, this Singleton can manage game settings such as difficulty level, which can be accessed from anywhere in the game.

class GameSettingsSingleton {
private:
    static GameSettingsSingleton* instance;
    int difficultyLevel;

    // Private constructor
    GameSettingsSingleton();

public:
    // Deleted copy constructor and assignment operator for Singleton
    GameSettingsSingleton(const GameSettingsSingleton&) = delete;
    GameSettingsSingleton& operator=(const GameSettingsSingleton&) = delete;

    static GameSettingsSingleton* getInstance();

    int getDifficultyLevel() const;
    void setDifficultyLevel(int level);
};

//Checklist for  correct implementation:
// The constructor is private to prevent direct instantiation.
// A static instance of the class is maintained.
// The getInstance method creates a new instance if one does not exist, or returns the existing one, ensuring only one instance exists.
// The getDifficultyLevel and setDifficultyLevel methods allows getting and setting the difficulty level, which can be used across different parts of the game.

#endif