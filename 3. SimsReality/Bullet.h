#ifndef BULLET_H
#define BULLET_H

using namespace std;

#include "Item.h"

class Bullet : public Item {
private:
    int damage;  
    float speed; 

public:
    Bullet(const string& name, const string& description, int bulletDamage, float bulletSpeed);

    void interact() override;
    int getDamage() const;
    float getSpeed() const;
};

#endif