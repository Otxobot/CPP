#include "ClapTrap.hpp"

int main() {
	ClapTrap A("Ana"), B("Bob");
	ClapTrap C(B);
	A.setAttackDamage(10);
	A.attack("Bob");
	B.takeDamage(10);
	B.beRepaired(10);
	B.setAttackDamage(20);
	B.attack("Ana");
	C.setAttackDamage(30);
	C.attack("Ana");
	A.takeDamage(20);
	A.takeDamage(30);
	return 0;
}