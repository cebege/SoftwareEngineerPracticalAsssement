#include "Sim.h"
#include "Inventory.h"

Sim::Sim(const string& actorName, const string& actorType, int actorHealth, const string& mood, int energy, const vector<string>& skills)
    : Actor(actorName, actorType, actorHealth)
    , currentMood(mood), energyLevel(energy), skillSet(skills) {
    inventory = new Inventory(10);
}


void Sim::wearHeadset(VirtualRealityHeadset& headset) {
 
}

void Sim::playGame(VRGame& game) {

}

void Sim::useController(VRController& controller) {

}

void Sim::reactToGame() {

}

// Getters and setters implementation
string Sim::getCurrentMood() const {
    return currentMood;
}

int Sim::getEnergyLevel() const {
    return energyLevel;
}

vector<string> Sim::getSkillSet() const {
    return skillSet;
}

void Sim::updateMood(const string& mood) {
    currentMood = mood;
}

void Sim::updateEnergyLevel(int energy) {
    energyLevel = energy;
}

void Sim::addSkill(const string& skill) {
    skillSet.push_back(skill);
}

Inventory* Sim::getInventory() {
    return inventory;
}