#include "Actor.h"

Actor::Actor(const string& actorName, const string& actorType, int actorHealth)
    : name(actorName), type(actorType), health(actorHealth) {
    position[0] = position[1] = position[2] = 0.0f;
}

void Actor::updatePosition(float x, float y, float z) {
    position[0] = x;
    position[1] = y;
    position[2] = z;
}

void Actor::takeDamage(int amount) {

    health -= amount;
    if (health < 0) health = 0;
}

// Getter methods
string Actor::getName() const {

    return name;
}

string Actor::getType() const {

    return type;
}

int Actor::getHealth() const {

    return health;
}


void Actor::updateActorState()
{

}