#include "Bullet.h"

Bullet::Bullet(const string& name, const string& description, int bulletDamage, float bulletSpeed)
    : Item(name, "Bullet", description), damage(bulletDamage), speed(bulletSpeed) {};

void Bullet::interact() {


}

int Bullet::getDamage() const {
    return damage;
}

float Bullet::getSpeed() const {
    return speed;
}