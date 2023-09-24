#include <iostream>
#include <string>
#include <time.h>
#include "Bird.h"
#include "Woodpecker.h"
#include "Tit.h"
#include "Nightingale.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    Bird* Arr[4];

    Arr[0] = (Bird*)new Woodpecker();
    Arr[1] = (Bird*)new Nightingale();
    Arr[2] = (Bird*)new Tit();
    Arr[3] = new Bird();

    cout << "\nКласс Woodpecker:\n\n";
    Arr[0]->View();

    cout << "\nКласс Nightingale:\n\n";
    Arr[1]->View();

    cout << "\nКласс Tit:\n\n";
    Arr[2]->View();
}

