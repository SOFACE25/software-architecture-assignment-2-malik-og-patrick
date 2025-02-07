#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage) {}

void Soldier::attack(Unit &target)
{
    target.take_hit(damage); // Soldier inflicts damage on target
}

void Soldier::heal(Unit &target)
{
    // Soldiers cannot heal, so we leave this empty.
}

