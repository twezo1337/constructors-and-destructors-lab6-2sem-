#include<iostream>
using namespace std;
#include <windows.h>
#include "roundCone.h"
#include <ctime>

int main(void) {
	srand(time(NULL));
	setlocale(LC_ALL, "RUSSIAN");

	int key = 0;
	cout << "Введите 1 - если хотите объявить простую переменную статически. Введите 2 - если хотите объявить простую переменную динамически. Введите 3 - если хотите объявить массив объектов.: ";
	cin >> key;

	switch (key) {
	case 1: {
		roundCone A;   //создан объект конструктором по умолчанию
		roundCone B(2, 4, 6, 5, 10);   //создан объект конструктором с параметрами
		roundCone C(A);   //создан объект конструктором копий


		//вывод объектов

		cout << "Конус А: ";

		A.Out();

		cout << "Конус B: ";

		B.Out();

		cout << "Конус C копия конуса A: ";

		C.Out();
	}
	break;
	
	case 2: {
		roundCone *A = new roundCone;
		roundCone* B = new roundCone(-7, 6, 7, 5, 5);  //создан объект динамически конструктором с //параметрами
		roundCone C(*A);
		
		cout << "Конус А: ";

		A->Out();

		cout << "Конус B: ";

		B->Out();

		cout << "Конус C копия конуса A: ";

		C.Out();
		delete[]A;
		delete[]B;
		delete[]&C;
	}
	break;

	case 3: {
		const int N = 2;
		roundCone cone_arr1[N];
		
		cout << "\nМассив конусов со случайными числа" << endl;
		for (int i = 0; i < N; i++) {
			cone_arr1[i].Out();
		}	
	}
	break;
	}

	return 0;
}