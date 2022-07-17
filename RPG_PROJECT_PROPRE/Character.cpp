#include "Character.h"

CHARACTER::CHARACTER(unsigned short int evilLife, unsigned short int kindLife, unsigned short int kindMana, unsigned short int kindArmor, unsigned short int maxHealth) {
	this->setEvilCharacter(evilLife);
	this->setKindCharacter(kindLife, kindMana, kindArmor, maxHealth);
};

void CHARACTER::getEvilDamage(unsigned short int damage) {
	if (getEvilLife() > damage) { setEvilLife(a_evilLife -= damage);}
	else { setEvilLife(0); }
}

void CHARACTER::getKindDamage(unsigned short int damage) {
	if (getKindLife() > damage) { setKindLife(a_kindLife -= damage); }
	else { setKindLife(0); }
}

unsigned short int CHARACTER::getmaxHealth() { return this->a_maxHealth; }

unsigned short int CHARACTER::getKindLife() { return this->a_kindLife; }

unsigned short int CHARACTER::getEvilLife() { return this->a_evilLife; }

void CHARACTER::setKindLife(unsigned short int newKindLife) { getKindLife() == newKindLife; }

void CHARACTER::setEvilLife(unsigned short int newEvilLife) { getEvilLife() == newEvilLife; }



void CHARACTER::getKindHeal(unsigned short int heal) {
	unsigned short int newKindLife = getKindLife() + heal;
	if (newKindLife > getmaxHealth()) { setKindLife(getmaxHealth()); }
	else { setKindLife(newKindLife); }
}

bool CHARACTER::isEvilAlive() { return a_evilLife > 0; }

bool CHARACTER::isKindAlive() { return a_kindLife > 0; }