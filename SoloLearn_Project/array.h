#pragma once
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

void array_1() {

	string* menu = new string[6];

	menu[0] = "Ваша первая программа на языке С++";
	menu[1] = "Ваша первая программа на языке С++ №2";
	menu[2] = "Main";
	menu[3] = "Ваша первая программа на языке С++ №3";
	menu[4] = "Выражения";
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

	menu[0] = "Получаем инструменты";
	menu[1] = "Получаем инструменты №2";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;

	delete[]menu;
}
void array_3() {

	string* menu = new string[5];

	menu[0] = "Ваша первая программа на языке С++";
	menu[1] = "Новая строка ";
	menu[2] = "Новые строки ";
	menu[3] = "Новые строки №2";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;

	delete[]menu;
}
void array_4() {

	string* menu = new string[3];

	menu[0] = "Комментарии";
	menu[1] = "Многострочные комментарии";
	menu[2] = "Использование комментариев";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;

	delete[]menu;

}
void array_5() {

	string* menu = new string[4];

	menu[0] = "Переменные";
	menu[1] = "Переменные №2";
	menu[2] = "Переменные №3";
	menu[3] = "Переменные №4";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;

	delete[]menu;

}
void array_6() {

	string* menu = new string[5];

	menu[0] = "Объявляем переменные";
	menu[1] = "Ввод пользователем";
	menu[2] = "Получение введенной информации";
	menu[3] = "Получение введенной информации #2";
	menu[4] = "Получение введенной информации #3";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;

	delete[]menu;

}
void array_7() {

	string* menu = new string[2];

	menu[0] = "Переменные";
	menu[1] = "Переменные №2";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;

	delete[]menu;
}
void array_8() {

	string* menu = new string[7];
	int* num = new int;

	menu[0] = "Арифметические операторы";
	menu[1] = "Вычитание";
	menu[2] = "Умножение";
	menu[3] = "Деление";
	menu[4] = "Деление по модулю";
	menu[5] = "Приоритет операторов";
	menu[6] = "Приоритет операторов";

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

	menu[0] = "Операторы присваивания";
	menu[1] = "Операторы присваивания №2";
	menu[2] = "Оператор инкремента";
	menu[3] = "Оператор инкремента №3";
	menu[4] = "Оператор декремента";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;

	delete[]menu;

}
void array_10() {

	string* menu = new string[5];

	menu[0] = "Объявляем переменные";
	menu[1] = "Ввод пользователем";
	menu[2] = "Получение введенной информации";
	menu[3] = "Получение введенной информации #2";
	menu[4] = "Получение введенной информации #3";

	cout << "1. " << menu[0] << endl;
	cout << "2. " << menu[1] << endl;
	cout << "3. " << menu[2] << endl;
	cout << "4. " << menu[3] << endl;
	cout << "5. " << menu[4] << endl;

	delete[]menu;

}
void array_11() {

	string* menu = new string[11];

	menu[0] = "Что такое С++";
	menu[1] = "Hello, World!";
	menu[2] = "Получаем инструменты";
	menu[3] = "Печатаем текст";
	menu[4] = "Комментирии";
	menu[5] = "Переменные";
	menu[6] = "Работаем с переменными";
	menu[7] = "Еще о переменных";
	menu[8] = "Базовая арифметика";
	menu[9] = "Опереатор присваивания и инкремент";
	menu[10] = "Упражнения 1-го модуля";

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

