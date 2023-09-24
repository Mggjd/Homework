#include "Bird.h"


void Bird::View() {
	setlocale(LC_ALL, " ");

	cout << "Кличка: " << Name << endl;
	cout << "Номер: " << ID << endl;
	cout << "Зимует ли: " << WinterOut << endl;
	cout << "Поёт ли: " << Voice << endl;
	cout << "Живёт ли в питомнике: " << Home << endl;
	cout << "Редкость: " << rarity << endl;

};