#ifndef ACTOR_H
#define ACTOR_H

#include <string>

using namespace std;

class Actor {
private:
    string name;
    string type; 
    int health;
    float position[3]; 

public:
    Actor(const string& actorName, const string& actorType, int actorHealth);

    void updatePosition(float x, float y, float z);
    void takeDamage(int amount);
    string getName() const;
    string getType() const;
    int getHealth() const;

    void updateActorState();
};

#endif 