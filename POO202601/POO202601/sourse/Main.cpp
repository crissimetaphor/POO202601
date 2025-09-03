
#include <iostream>
// this function is in charge of being the enty point of the app

class
Character {
public:
	Character() = default;
	Character(int health): m_health(health){}

	void
		rebirth() {
		if (!isCharacterAlive && m_health <= 0) {
			std::cout << "El Character a revivido en el Spawn Point" << std::endl;
			isCharacterAlive = true;
		}
	}

	int
	getHealth()const {
		return m_health;
	}

	void
		setHealth(int health) {
		m_health = health;
	}

private:
	bool isCharacterAlive = false;
protected:
	int m_health;
};


class
Inventario {
public:
	Inventario() = default;
	int posion;

protected:
	int ObjetoClave;
};

int 
main() {
	Character pepe(150);
	pepe.getHealth();
	std::cout << pepe.getHealth() << std::endl;
	pepe.setHealth(-59);
	std::cout << pepe.getHealth() << std::endl;

	if (pepe.getHealth() <= 0) {
		std::cout<<"El pepe murio." << std::endl;
		pepe.rebirth();
	}

	std::cout << "hola" << std::endl;



	return 0;
}