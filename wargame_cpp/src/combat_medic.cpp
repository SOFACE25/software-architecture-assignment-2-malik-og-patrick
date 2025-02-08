#include "combat_medic.hpp"
#include <iostream>

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage) {}

void CombatMedic::heal(Unit &target)
{
    if (target.get_health() <= 0)  // Prevent reviving dead units
    {
        std::cout << "He is gone..." << std::endl;
        return;
    }

    std::cout << "Hang in there!" << std::endl;
    target.set_health(target.get_health() + 10);
}
