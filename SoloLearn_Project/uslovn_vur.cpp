#include "uslovn_vur.h"
#include <iostream>
#include <vector>

using namespace std;



int main();



int operator_if_1() {
	return 0;
}

int operator_if_2() {
	return 0;
}

int operator_if_3() {
	return 0;
}

int operator_if_4() {
	return 0;
}

int operator_if_5() {
	return 0;
}

int Operator_if() {

	return 0;
}


int operator_else_1() {
	return 0;
}

int operator_else_2() {
	return 0;
}

int operator_else_3() {
	return 0;
}

int operator_else_4() {
	return 0;
}

int operator_else_5() {
	return 0;
}

int operator_else_6() {
	return 0;
}

int Operator_else() {

	return 0;
}


int loop_while_1() {
	return 0;
}

int loop_while_2() {
	return 0;
}

int loop_while_3() {
	return 0;
}

int Loop_while() {

	return 0;
}


int ispolz_loop_while_1() {
	return 0;
}

int ispolz_loop_while_2() {
	return 0;
}

int ispolz_loop_while_3() {
	return 0;
}

int Ispolzovan_loop_while() {

	return 0;
}


int loop_for_1() {
	return 0;
}

int loop_for_2() {
	return 0;
}

int loop_for_3() {
	return 0;
}

int Loop_for() {

	return 0;
}


int array_do_while_1() {
	return 0;
}

int array_do_while_2() {
	return 0;
}

int array_do_while_3() {
	return 0;
}

int array_do_while_4() {
	return 0;
}

int Array_do_while() {

	return 0;
}


int operator_switch_1() {
	return 0;
}

int operator_switch_2() {
	return 0;
}

int operator_switch_3() {
	return 0;
}

int operator_switch_4() {
	return 0;
}

int operator_switch_5() {
	return 0;
}

int  Operator_switch(){

	return 0;
}


int logical_operators_1() {
	return 0;
}

int logical_operators_2() {
	return 0;
}

int logical_operators_3() {
	return 0;
}

int logical_operators_4() {
	return 0;
}

int logical_operators_5() {
	return 0;
}

int Logical_operators() {

	return 0;
}


int exercises_2_module_1() {
	return 0;
}

int exercises_2_module_2() {
	return 0;
}

int exercises_2_module_3() {
	return 0;
}

int exercises_2_module_4() {
	return 0;
}

int exercises_2_module_5() {
	return 0;
}

int exercises_2_module_6() {
	return 0;
}

int exercises_2_module() {

	return 0;
}


void uslovn_vur::Uslovnue_vur() {

	int* num = new int;
	
	system("cls");

	vector <string> uslov{ "1. Оператор if", "2. Оператор else", "3. Цикл While", "4. Использование цикла While",
							"5. Цикл for", "6. Цикл do..While", "7. Оператор switch",
							"8. Логические операторы", "9. Упражнения 2 Модуля" };

	for (int i = 0; i < 9; i++) {
		cout << uslov[i] << endl;
		}

	cout << "Введите номер пункта >> " << endl;
	cin >> *num;

start_switch:

	switch (*num) {

	case 1:
		system("cls");
		Operator_if();
		cout << "Pr_1" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 2:
		system("cls");
		Operator_else();
		cout << "Pr_2" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 3:
		system("cls");
		Loop_while();
		cout << "Pr_3" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 4:
		system("cls");
		Ispolzovan_loop_while();
		cout << "Pr_4" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 5:
		system("cls");
		Loop_for();
		cout << "Pr_5" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 6:
		system("cls");
		Array_do_while();
		cout << "Pr_6" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 7:
		system("cls");
		Operator_switch();
		cout << "Pr_7" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 8:
		system("cls");
		Logical_operators();
		cout << "Pr_8" << endl;
		*num += 1;
		goto start_switch;
		break;
	case 9:
		system("cls");
		exercises_2_module();
		cout << "Pr_9" << endl;
		main();
		break;

	default:
		goto start_switch;
	}
	system("pause");
	
	
}
