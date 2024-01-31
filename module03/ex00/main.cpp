#include "ClapTrap.hpp"


void test_1() {
	std::cout << std::endl << "TEST 1:" << std::endl;
	ClapTrap A("Ana"), B("Bob");
	ClapTrap C(B);
	A.attack("Bob");
	B.takeDamage(10);
	B.beRepaired(10);
	B.attack("Ana");
	C.attack("Ana");
	A.takeDamage(10);
	A.takeDamage(10);
}

void test_2() {
	std::cout << std::endl << "TEST 2:" << std::endl;
	ClapTrap A("Ana"), B("Bob");
	A.attack("Bob");
	B.beRepaired(10);
	ClapTrap C(B);
	B.takeDamage(10);
	B.beRepaired(10);
	B.takeDamage(40);
	B.takeDamage(1);
	C.takeDamage(20);
	C.takeDamage(1);
}

int main() {
	test_1();
	test_2();
	return 0;
}