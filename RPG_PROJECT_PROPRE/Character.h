#ifndef Character.h
#define Character.h

#include <string>

using namespace std;

class CHARACTER {
public:
	//CONSTRUCTOR
	CHARACTER(unsigned short int evilLife = 0 , unsigned short int kindLife = 0 , unsigned short int kindMana = 0 , unsigned short int kindArmor = 0, unsigned short int maxHealth = 0);

	//METHOD USUELLES
	void getEvilDamage(unsigned short int damage);

	void getKindDamage(unsigned short int damage);

	unsigned short int getmaxHealth();

	unsigned short int getKindLife();

	unsigned short int getEvilLife();

	void setKindLife(unsigned short int newKindLife);

	void setEvilLife(unsigned short int newEvilLife);

	void getKindHeal(unsigned short int heal);

	bool isEvilAlive();

	bool isKindAlive();

	//ENCAPSULATION
	void setEvilCharacter(unsigned short int ennemyLife) { a_evilLife = ennemyLife; }
	
	void setKindCharacter(unsigned short int maximumHealth, unsigned short int kindMana, unsigned short int kindArmor, unsigned short int maxHeal) { 
		a_kindLife = maximumHealth;
		a_kindMana = kindMana;
		a_kindArmor = kindArmor;
		a_maxHealth = maxHeal;
	}

	//ATTRIBUTS


private:
	unsigned short int a_maxHealth;
	unsigned short int a_evilLife;
	unsigned short int a_kindLife;
	unsigned short int a_kindMana;
	unsigned short int a_kindArmor;

};

#endif // ! Character.h
