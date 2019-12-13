#include <iostream>
#include <string>
#include <cstdlib>
#include "stdafx.h"

using namespace std;

int Uslovnue_vurazheniya_loop();
int Osnovnue_ponyatiya();
int Hello_world();
int Poluchaem_instrumentu();
int Pechataem_text();
int Comments();
int Peremennue();
int Rabotaem_c_peremennumi();
int eche_o_peremennux();
int Bazovaya_ariphmetica();
int Operator_prisvaivaniya_i_inkrement();
int Uprazhneniya_1_modulya();
int main();

int chto_takoe_c() {                                                            /*1.Основные понятия >> Что такое С++ >> 1 тема*/

	int* num = new int;
	int* one_two_three_four = new int;
start:																			/*Точка, если пользователь захотел ввести значение заново когда неправильно ввёл его */
	text_();
	cin >> *num;
	if (*num == 1) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
		Osnovnue_ponyatiya();

	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			system("cls");
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete num;
	delete one_two_three_four;
	return 0;
}

int Hello_world_num1() {															/*1.Основные понятия >> Hello world >> номер 1 */

	string* word = new string;
	int* one_two_three_four = new int;

start_iostream:
	system("cls");
	text_2();																								/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите ответ >>> ";
	cin >> *word;
	if (*word == "iostream") {
		cout << "Правильно" << endl;
		system("pause");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start_iostream;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete word;
	delete one_two_three_four;
	return 0;
}

int Hello_world_num2() {																				/*1.Основные понятия >> Hello world >> номер 2 */

	string* word_2_1 = new string;
	string* word_2_2 = new string;
	int* one_two_three_four = new int;

	text_3();
word_2_1:																										/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 1 >>> ";
	cin >> *word_2_1;
	if (*word_2_1 == "using") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_1;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
word_2_2:																									/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 2 >>> ";
	cin >> *word_2_2;
	if (*word_2_2 == "std") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_2;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete one_two_three_four;
	delete word_2_1;
	delete word_2_2;
	return 0;
}

int Hello_world_num3() {																		/*1.Основные понятия >> Hello world >> номер 3 */

	int* num = new int;
	int* one_two_three_four = new int;

start:
	text_4();
	cin >> *num;
	if (*num == 2) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			system("cls");
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete num;
	delete one_two_three_four;
	return 0;
}

int Hello_world_num4() {																/*1.Основные понятия >> Hello world >> номер 4 */

	int* num = new int;
	int* one_two_three_four = new int;

start:
	text_5();
	cin >> *num;
	if (*num == 2) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			system("cls");
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete num;
	delete one_two_three_four;
	return 0;
}

int Hello_world_num5() {																/*1.Основные понятия >> Hello world >> номер 5 */

	int* one_two_three_four = new int;
	string* word = new string;

start:
	text_6();
	cin >> *word;
	if (*word == "cout") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			system("cls");
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete word;
	delete one_two_three_four;
	return 0;
}

int Hello_world_num6() {																	/*1.Основные понятия >> Hello world >> номер 6 */

	text_7();
	system("pause");
	return 0;
}

int Hello_world() {																            	/*2. Hello world, описанны все темы 2-го пункта*/

	int* num = new int;
	int* one_two = new int;

	array_1();
	
start:
	cout << "Выберите пункт >>> ";
	cin >> *num;
	for (*num; *num < 7; *num += 1) {				                                      /*Цыкл позволяет после окончания пункта сразу же перейти к следующему*/
		if (*num == 1) {
			system("cls");
			Hello_world_num1();
		}
		else if (*num == 2) {
			system("cls");
			Hello_world_num2();
		}
		else if (*num == 3) {
			system("cls");
			Hello_world_num3();
		}
		else if (*num == 4) {
			system("cls");
			Hello_world_num4();
		}
		else if (*num == 5) {
			system("cls");
			Hello_world_num5();
		}
		else if (*num == 6) {
			system("cls");
			Hello_world_num6();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start;

	delete num;
	delete one_two;
	
	return 0;
}



int Poluchaem_instrumentu1() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_8();

start:
	cout << "Введите число >>> ";
	cin >> *num;
	if (*num == 1) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Poluchaem_instrumentu();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete num;
	delete one_two_three_four;
	return 0;
}

int Poluchaem_instrumentu2() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_9();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 2) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Poluchaem_instrumentu();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;
	return 0;
}

int Poluchaem_instrumentu() {													/*Сделать цикл*/

	int* num = new int;
	string* menu = new string[2];

	array_2();
	
start_instrumentu:

	cout << "Введите число >>> ";
	cin >> *num;

	for (*num; *num <= 2; *num += 1) {
		if (*num == 1) {
			system("cls");
			Poluchaem_instrumentu1();
		}
		else if (*num == 2) {
			system("cls");
			Poluchaem_instrumentu2();
			Osnovnue_ponyatiya();
		}

	}
	cout << "Ошибка ";
	system("pause");
	goto start_instrumentu;

	delete num;

	return 0;
}



int Pechataem_text_1() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_11();

start:

	cout << "Введите слово >>> ";
	cin >> *word;

	if (*word == "cout") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Pechataem_text();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;



	return 0;
}

int Pechataem_text_2() 
{
	int* num = new int;
	int* one_two_three_four = new int;

	text_12();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 2) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Pechataem_text();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;
	
	return 0;
}

int Pechataem_text_3() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_13();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 3) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Pechataem_text();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;

	return 0;
}

int Pechataem_text_4() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_14();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "<<") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Pechataem_text();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;

	return 0;
}

int Pechataem_text() {

	int* num = new int;

	array_3();

start_pechataem_text:

	cout << "Введите число >>> ";
	cin >> *num;
	for (*num; *num <= 4; *num += 1) {
		if (*num == 1) {
			system("cls");
			Pechataem_text_1();
		}
		else if (*num == 2) {
			system("cls");
			Pechataem_text_2();
		}
		else if (*num == 3) {
			system("cls");
			Pechataem_text_3();
		}
		else if (*num == 4) {
			system("cls");
			Pechataem_text_4();
			Osnovnue_ponyatiya();
		}

	}
	cout << "Ошибка";
	system("pause");
	goto start_pechataem_text;

	delete num;

	return 0;
} 



int comments_1() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_16();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 1) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Comments();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;

	return 0;
}

int comments_2() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_17();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "/*") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Comments();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;

	return 0;
}

int comments_3() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_18();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 3) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Comments();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;

	return 0;
}

int Comments() {

	int* num = new int;

	array_4();

start_comments:

	cout << "Введите число >>> ";
	cin >> *num;
	for (*num; *num <= 3; *num += 1) {
		if (*num == 1) {
			system("cls");
			comments_1();
		}
		else if (*num == 2) {
			system("cls");
			comments_2();
		}
		else if (*num == 3) {
			system("cls");
			comments_3();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start_comments;

	delete num;

	return 0;
}



int peremennue_1() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_19();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "int") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Peremennue();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;
	return 0;
}

int peremennue_2() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_20();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "cout") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Peremennue();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;
	return 0;
}

int peremennue_3() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_21();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "sum") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Peremennue();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;
	return 0;

	return 0;
}

int peremennue_4() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_22();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 2) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Peremennue();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;

	return 0;
}

int Peremennue() {

	int* num = new int;

	array_5();

start_peremennue:

	cout << "Введите число >>> ";
	cin >> *num;
	for (*num; *num <= 4; *num += 1) {
		if (*num == 1) {
			system("cls");
			peremennue_1();
		}
		else if (*num == 2) {
			system("cls");
			peremennue_2();
		}
		else if (*num == 3) {
			system("cls");
			peremennue_3();
		}
		else if (*num == 4) {
			system("cls");
			peremennue_4();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start_peremennue;

	delete num;

	return 0;
}



int rabot_perem_1() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_23();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "int") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Rabotaem_c_peremennumi();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;

	return 0;
}

int rabot_perem_2() {
	int* num = new int;
	int* one_two_three_four = new int;

	text_24();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 2) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Rabotaem_c_peremennumi();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;
	return 0;
}

int rabot_perem_3() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_25();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "cin") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Rabotaem_c_peremennumi();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;
	return 0;
}

int rabot_perem_4() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_26();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "cin") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Rabotaem_c_peremennumi();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;
	return 0;
}

int rabot_perem_5() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_27();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "cout") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Rabotaem_c_peremennumi();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;
	return 0;
}

int Rabotaem_c_peremennumi() {

	int* num = new int;

	array_6();

start_work_with_peremennue:

	cout << "Введите число >>> ";
	cin >> *num;
	for (*num; *num <= 5; *num += 1) {
		if (*num == 1) {
			system("cls");
			rabot_perem_1();
		}
		else if (*num == 2) {
			system("cls");
			rabot_perem_2();
		}
		else if (*num == 3) {
			system("cls");
			rabot_perem_3();
		}
		else if (*num == 4) {
			system("cls");
			rabot_perem_4();
		}
		else if (*num == 5) {
			system("cls");
			rabot_perem_5();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start_work_with_peremennue;

	delete num;

	return 0;
}



int eche_o_peremennux_1() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_28();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 4) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			eche_o_peremennux();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;
	return 0;
}

int eche_o_peremennux_2() {

	string* word = new string;
	int* one_two_three_four = new int;

	text_29();

start:

	cout << "Введите слово >>> ";
	cin >> *word;
	if (*word == "+") {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			eche_o_peremennux();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete word;
	delete one_two_three_four;
	return 0;
}

int eche_o_peremennux() {

	int* num = new int;

	array_7();

start_eche_o_per:

	cout << "Введите число >>> ";
	cin >> *num;

	for (*num; *num <= 2; *num += 1) {
		if (*num == 1) {
			system("cls");
			eche_o_peremennux_1();
		}
		else if (*num == 2) {
			system("cls");
			eche_o_peremennux_2();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start_eche_o_per;
	delete num;

	return 0;
}



int bazovaya_ariphmetica_1() {
	text_30();
	system("pause");
	return 0;
}

int bazovaya_ariphmetica_2() {
	text_31();
	system("pause");
	return 0;
}

int bazovaya_ariphmetica_3() {
	text_32();
	system("pause");
	return 0;
}

int bazovaya_ariphmetica_4() {
	text_33();
	system("pause");
	return 0;
}

int bazovaya_ariphmetica_5() {
	text_34();
	system("pause");
	return 0;
}

int bazovaya_ariphmetica_6() {
	text_35();
	system("pause");
	return 0;
}

int bazovaya_ariphmetica_7() {
	text_36();
	system("pause");
	return 0;
}

int Bazovaya_ariphmetica() {

	int* num = new int;

	array_8();

start_bazovaya_ariphmetica:

	cout << "Введите число >>> ";
	cin >> *num;
	for (*num; *num <= 7; *num += 1) {
		if (*num == 1) {
			system("cls");
			bazovaya_ariphmetica_1();
		}
		else if (*num == 2) {
			system("cls");
			bazovaya_ariphmetica_2();
		}
		else if (*num == 3) {
			system("cls");
			bazovaya_ariphmetica_3();
		}
		else if (*num == 4) {
			system("cls");
			bazovaya_ariphmetica_4();
		}
		else if (*num == 5) {
			system("cls");
			bazovaya_ariphmetica_5();
		}
		else if (*num == 6) {
			bazovaya_ariphmetica_6();
		}
		else if (*num == 7) {
			system("cls");
			bazovaya_ariphmetica_7();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start_bazovaya_ariphmetica;
	delete num;

	return 0;
}



int Operator_prisvaivaniya_i_inkrement_1() {
	text_37();
	system("pause");
	return 0;
}

int Operator_prisvaivaniya_i_inkrement_2() {
	text_38();
	system("pause");
	return 0;
}

int Operator_prisvaivaniya_i_inkrement_3() {
	text_39();
	system("pause");
	return 0;
}

int Operator_prisvaivaniya_i_inkrement_5() {
	text_40();
	system("pause");
	return 0;
}

int Operator_prisvaivaniya_i_inkrement_6() {
	text_41();
	system("pause");
	return 0;
}

int Operator_prisvaivaniya_i_inkrement() {

	int* num = new int;

	array_9();

start_operator_prisvaivaniya_i_inkrement:

	cout << "Введите число >>> ";
	cin >> *num;
	for (*num; *num < 6; *num += 1) {
		if (*num == 1) {
			system("cls");
			Operator_prisvaivaniya_i_inkrement_1();
		}
		else if (*num == 2) {
			system("cls");
			Operator_prisvaivaniya_i_inkrement_2();
		}
		else if (*num == 3) {
			system("cls");
			Operator_prisvaivaniya_i_inkrement_3();
		}
		else if (*num == 4) {
			system("cls");
			Operator_prisvaivaniya_i_inkrement_5();
		}
		else if (*num == 5) {
			system("cls");
			Operator_prisvaivaniya_i_inkrement_6();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start_operator_prisvaivaniya_i_inkrement;

	delete num;

	return 0;
}



int Uprazhneniya_1_modulya_1() {

	string* word_2_1 = new string;
	string* word_2_2 = new string;
	string* word_2_3 = new string;
	string* word_2_4 = new string;
	int* one_two_three_four = new int;

	text_42();
word_2_1:																										/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 1 >>> ";
	cin >> *word_2_1;
	if (*word_2_1 == "include") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_1;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
word_2_2:																									/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 2 >>> ";
	cin >> *word_2_2;
	if (*word_2_2 == "using") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_2;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Uprazhneniya_1_modulya();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
word_2_3:																										/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 3 >>> ";
	cin >> *word_2_3;
	if (*word_2_3 == "int") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_3;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Uprazhneniya_1_modulya();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
word_2_4:																										/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 4 >>> ";
	cin >> *word_2_4;
	if (*word_2_4 == "return") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_4;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Uprazhneniya_1_modulya();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
	delete one_two_three_four;
	delete word_2_1;
	delete word_2_2;
	delete word_2_3;
	delete word_2_4;
	return 0;
}

int Uprazhneniya_1_modulya_2() {

	string* word_2_1 = new string;
	string* word_2_2 = new string;
	string* word_2_3 = new string;
	int* one_two_three_four = new int;

	text_43();
word_2_1:																										/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 1 >>> ";
	cin >> *word_2_1;
	if (*word_2_1 == "int") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_1;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
word_2_2:																									/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 2 >>> ";
	cin >> *word_2_2;
	if (*word_2_2 == "+") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_2;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Uprazhneniya_1_modulya();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
word_2_3:																										/*Точка, если пользователь ввёл не правильно значение/текс то он может попробовать заново*/
	cout << "Введите слово под номером 3 >>> ";
	cin >> *word_2_3;
	if (*word_2_3 == "sum") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_3;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Uprazhneniya_1_modulya();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete one_two_three_four;
	delete word_2_1;
	delete word_2_2;
	delete word_2_3;

	return 0;
}

int Uprazhneniya_1_modulya_3() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_44();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 3) {
		cout << "Правильно" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			eche_o_peremennux();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;

	return 0;
}

int Uprazhneniya_1_modulya_4() {

	string* word_2_1 = new string;
	string* word_2_2 = new string;
	int* one_two_three_four = new int;

	text_45();

word_2_1:		

	cout << "Введите слово под номером 1 >>> ";
	cin >> *word_2_1;
	if (*word_2_1 == "cout") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_1;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Hello_world();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}
word_2_2:																									
	cout << "Введите слово под номером 2 >>> ";
	cin >> *word_2_2;
	if (*word_2_2 == "/") {
		cout << "Правильно" << endl;
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto word_2_2;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			Uprazhneniya_1_modulya();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete one_two_three_four;
	delete word_2_1;
	delete word_2_2;
	
	return 0;
}

int Uprazhneniya_1_modulya_5() {

	int* num = new int;
	int* one_two_three_four = new int;

	text_46();

start:

	cout << "Введите число >>> ";
	cin >> *num;

	if (*num == 4) {
		cout << "Правильно" << endl << endl;
		cout << "Поздравляем!!! Вы прошли первый пункт курса" << endl;
		system("pause");
		system("cls");
		main();
	}
	else {
		cout << "Не правильно" << endl;
		cout << "1 - Ввести заново" << "      " << "2 - Вернутся к выбору темы" << "      " << "3 - Вернутся к выбору подтемы" << "      " << "4 - Выход из приложения" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two_three_four;
		if (*one_two_three_four == 1) {
			goto start;
		}
		else if (*one_two_three_four == 2) {
			Osnovnue_ponyatiya();
		}
		else if (*one_two_three_four == 3) {
			system("cls");
			eche_o_peremennux();
		}
		else if (*one_two_three_four == 4) {
			exit(1);
		}
	}

	delete num;
	delete one_two_three_four;

	return 0;
}

int Uprazhneniya_1_modulya() {

	int* num = new int;

	array_10();

start_uprazhneniya_1_modulya:

	cout << "Введите число >>> ";
	cin >> *num;
	for (*num; *num <= 5; *num += 1) {
		if (*num == 1) {
			system("cls");
			Uprazhneniya_1_modulya_1();
		}
		else if (*num == 2) {
			system("cls");
			Uprazhneniya_1_modulya_2();
		}
		else if (*num == 3) {
			system("cls");
			Uprazhneniya_1_modulya_3();
		}
		else if (*num == 4) {
			system("cls");
			Uprazhneniya_1_modulya_4();
		}
		else if (*num == 5) {
			system("cls");
			Uprazhneniya_1_modulya_5();
			Osnovnue_ponyatiya();
		}
	}
	cout << "Ошибка ";
	system("pause");
	goto start_uprazhneniya_1_modulya;

	delete num;

	return 0;
}



int Osnovnue_ponyatiya() {

	system("cls");

	int* num = new int;
	int* one_two = new int;
	int* counter = new int;

	array_11();

start_osn_pon:

	cout << "Выберите пункт >>> ";
	cin >> *num;
	for (*num; *num < 12; *num += 1) {				                                      /*Цыкл позволяет после окончания пункта сразу же перейти к следующему*/
		if (*num == 1) {
			system("cls");
			chto_takoe_c();
		}
		else if (*num == 2) {
			system("cls");
			Hello_world();
		}
		else if (*num == 3) {
			system("cls");
			Poluchaem_instrumentu();
		}
		else if (*num == 4) {
			system("cls");
			Pechataem_text();
		}
		else if (*num == 5) {
			system("cls");
			Comments();
		}
		else if (*num == 6) {
			system("cls");
			Peremennue();
		}
		else if (*num == 7) {
			system("cls");
			Rabotaem_c_peremennumi();
		}
		else if (*num == 8) {
			system("cls");
			eche_o_peremennux();
		}
		else if (*num == 9) {
			system("cls");
			Bazovaya_ariphmetica();
		}
		else if (*num == 10) {
			system("cls");
			Operator_prisvaivaniya_i_inkrement();
		}
		else if (*num == 11) {
			system("cls");
			Uprazhneniya_1_modulya();
			main();
		}
		system("pause");
	}
	cout << "Ошибка " << endl;
	system("pause");
	goto start_osn_pon;

	delete num;
	delete counter;
	delete one_two;

	return 0;
}

int Uslovnue_vurazheniya_loop() {

	uslovn_vur head_;
	head_.Uslovnue_vur();

	return 0;
}


int main() {
	const int NotUsed = system("color E9");
	setlocale(LC_ALL, "ru");

	int* num = new int;
	int* one_two = new int;
	int* c = new int;
	string* menu = new string[3];

tochka:

	menu[0] = "Основные понятия";
	menu[1] = "Условные выражение и циклы";
	menu[2] = "Типы данных, Массивы, Указатели";

	cout << "Курс по С++" << endl << endl;
	cout << "1 " << menu[0] << endl;
	cout << "2 " << menu[1] << endl;
	cout << "3 " << menu[2] << endl;
	cout << "Введите пункт меню: ";
	cin >> *num;
	if (*num == 1) {

		Osnovnue_ponyatiya();

		system("pause");
		system("cls");
		cout << "1 - Продолжить" << "      " << "2 - Выход" << endl;
		cout << "Введите число >>> ";
		cin >> *one_two;
		if (*one_two == 1) {
			system("cls");
			goto tochka;
		}
		else if (*one_two == 2) {
			exit(0);
		}
	}
	else if (*num == 2) {

		Uslovnue_vurazheniya_loop();

	}
	else if (*num == 3) {

	}
	else {

	}

	delete num;
	delete one_two;
	delete[]menu;
	return 0;
}