#ifndef VRACHIEVEMENTTRACKER_H
#define VRACHIEVEMENTTRACKER_H

#include <string>
#include <vector>

using namespace std;

// Good implementation. This class is also a very suitable candidate for a singleton
// All methods here are correctly aligned with the functionality

class VRAchievementTracker {
private:

    vector<string> achievements;
    double progress;

public:

    VRAchievementTracker();

    void unlockAchievement(const string& achievementName);
    void trackProgress(double progressIncrement);
    vector<string> listAchievements() const { return achievements; }

    void checkAndUnlockAchievement();
};

#endif