#include "Bird.h"


void Bird::View() {
	setlocale(LC_ALL, " ");

	cout << "������: " << Name << endl;
	cout << "�����: " << ID << endl;
	cout << "������ ��: " << WinterOut << endl;
	cout << "��� ��: " << Voice << endl;
	cout << "���� �� � ���������: " << Home << endl;
	cout << "��������: " << rarity << endl;

};