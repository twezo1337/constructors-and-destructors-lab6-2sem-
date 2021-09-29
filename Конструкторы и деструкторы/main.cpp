#include<iostream>
using namespace std;
#include <windows.h>
#include "roundCone.h"
#include <ctime>

int main(void) {
	srand(time(NULL));
	setlocale(LC_ALL, "RUSSIAN");

	int key = 0;
	cout << "������� 1 - ���� ������ �������� ������� ���������� ����������. ������� 2 - ���� ������ �������� ������� ���������� �����������. ������� 3 - ���� ������ �������� ������ ��������.: ";
	cin >> key;

	switch (key) {
	case 1: {
		roundCone A;   //������ ������ ������������� �� ���������
		roundCone B(2, 4, 6, 5, 10);   //������ ������ ������������� � �����������
		roundCone C(A);   //������ ������ ������������� �����


		//����� ��������

		cout << "����� �: ";

		A.Out();

		cout << "����� B: ";

		B.Out();

		cout << "����� C ����� ������ A: ";

		C.Out();
	}
	break;
	
	case 2: {
		roundCone *A = new roundCone;
		roundCone* B = new roundCone(-7, 6, 7, 5, 5);  //������ ������ ����������� ������������� � //�����������
		roundCone C(*A);
		
		cout << "����� �: ";

		A->Out();

		cout << "����� B: ";

		B->Out();

		cout << "����� C ����� ������ A: ";

		C.Out();
		delete[]A;
		delete[]B;
		delete[]&C;
	}
	break;

	case 3: {
		const int N = 2;
		roundCone cone_arr1[N];
		
		cout << "\n������ ������� �� ���������� �����" << endl;
		for (int i = 0; i < N; i++) {
			cone_arr1[i].Out();
		}	
	}
	break;
	}

	return 0;
}