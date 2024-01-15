#ifndef SIM_H
#define SIM_H

using namespace std;

#include <string>
#include <vector>
#include "Actor.h"

//I would separate into separate headers to keep work clear and manageable, as demonstrated by this project file.

class Inventory;
class VirtualRealityHeadset;
class VRGame;
class VRController;

class Sim : public Actor {
private:

    //Attributes
    string currentMood;
    int energyLevel;
    vector<string> skillSet;

    Inventory* inventory;  // Assuming each Sim has a VRInventory

public:

    //Constructor
    Sim(const string& actorName, const string& actorType, int actorHealth, const string& mood, int energy, const vector<string>& skills);

    //Methods
    void wearHeadset(VirtualRealityHeadset& headset);
    void playGame(VRGame& game);
    void useController(VRController& controller);
    void reactToGame();
    string getCurrentMood() const;
    int getEnergyLevel() const;
    vector<string> getSkillSet() const;
    void updateMood(const string& mood);
    void updateEnergyLevel(int energy);
    void addSkill(const string& skill);
    Inventory* getInventory();
};

#endif 


