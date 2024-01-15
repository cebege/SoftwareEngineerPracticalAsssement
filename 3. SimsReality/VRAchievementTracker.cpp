#include "VRAchievementTracker.h"

VRAchievementTracker::VRAchievementTracker() : progress(0.0) {}

void VRAchievementTracker::unlockAchievement(const std::string& achievementName) {
    achievements.push_back(achievementName);

}

void VRAchievementTracker::trackProgress(double progressIncrement) {
    progress += progressIncrement;
}

void VRAchievementTracker::checkAndUnlockAchievement()
{

}
