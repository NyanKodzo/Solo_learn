#pragma once
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

void array_1() {

	string* menu = new string[6];

	menu[0] = "���� ������ ��������� �� ����� �++";
	menu[1] = "���� ������ ��������� �� ����� �++ �2";
	menu[2] = "Main";
	menu[3] = "���� ������ ��������� �� ����� �++ �3";
	menu[4] = "���������";
	menu[5] = "Return";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;
	cout << "6. " << menu[5] << endl;

	delete[]menu;
}

void array_2() {

	string* menu = new string[2];

	menu[0] = "�������� �����������";
	menu[1] = "�������� ����������� �2";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;

	delete[]menu;
}
void array_3() {

	string* menu = new string[5];

	menu[0] = "���� ������ ��������� �� ����� �++";
	menu[1] = "����� ������ ";
	menu[2] = "����� ������ ";
	menu[3] = "����� ������ �2";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;

	delete[]menu;
}
void array_4() {

	string* menu = new string[3];

	menu[0] = "�����������";
	menu[1] = "������������� �����������";
	menu[2] = "������������� ������������";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;

	delete[]menu;

}
void array_5() {

	string* menu = new string[4];

	menu[0] = "����������";
	menu[1] = "���������� �2";
	menu[2] = "���������� �3";
	menu[3] = "���������� �4";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;

	delete[]menu;

}
void array_6() {

	string* menu = new string[5];

	menu[0] = "��������� ����������";
	menu[1] = "���� �������������";
	menu[2] = "��������� ��������� ����������";
	menu[3] = "��������� ��������� ���������� #2";
	menu[4] = "��������� ��������� ���������� #3";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;

	delete[]menu;

}
void array_7() {

	string* menu = new string[2];

	menu[0] = "����������";
	menu[1] = "���������� �2";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;

	delete[]menu;
}
void array_8() {

	string* menu = new string[7];
	int* num = new int;

	menu[0] = "�������������� ���������";
	menu[1] = "���������";
	menu[2] = "���������";
	menu[3] = "�������";
	menu[4] = "������� �� ������";
	menu[5] = "��������� ����������";
	menu[6] = "��������� ����������";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;
	cout << "6. " << menu[5] << endl;
	cout << "7. " << menu[6] << endl;

	delete[]menu;


}
void array_9() {

	string* menu = new string[5];

	menu[0] = "��������� ������������";
	menu[1] = "��������� ������������ �2";
	menu[2] = "�������� ����������";
	menu[3] = "�������� ���������� �3";
	menu[4] = "�������� ����������";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;

	delete[]menu;

}
void array_10() {

	string* menu = new string[5];

	menu[0] = "��������� ����������";
	menu[1] = "���� �������������";
	menu[2] = "��������� ��������� ����������";
	menu[3] = "��������� ��������� ���������� #2";
	menu[4] = "��������� ��������� ���������� #3";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;

	delete[]menu;

}
void array_11() {

	string* menu = new string[11];

	menu[0] = "��� ����� �++";
	menu[1] = "Hello, World!";
	menu[2] = "�������� �����������";
	menu[3] = "�������� �����";
	menu[4] = "�����������";
	menu[5] = "����������";
	menu[6] = "�������� � �����������";
	menu[7] = "��� � ����������";
	menu[8] = "������� ����������";
	menu[9] = "��������� ������������ � ���������";
	menu[10] = "���������� 1-�� ������";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;
	cout << "6. " << menu[5] << endl;
	cout << "7. " << menu[6] << endl;
	cout << "8. " << menu[7] << endl;
	cout << "9. " << menu[8] << endl;
	cout << "10. " << menu[9] << endl;
	cout << "11. " << menu[10] << endl;

	delete[]menu;

}


#endif

