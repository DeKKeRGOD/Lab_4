#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct STUDENT // Структура адрес
{2
string name;
int group;
float ses[5];
};
int main()
{
const int size = 5; // Задаем определенное количество студентов
STUDENT studl[size];
int i, j;
int n = 0;
int count = 0;
for (i = 0; i < size; i++)
{
cout << "Enter the surname of student" << endl; // Вводим фамилию студента
cin >> studl[n].name;
cout << "Enter number of group" << endl; // Вводим номер группы
cin >> studl[n].group;
cout << "Enter 5 assessment" << endl; // Вводим 5 оценок данного студента
for (int i = 0; i < 5; i++)
cin >> studl[n].ses[i];
n++;
}
float sum = 0;
for (i = 0; i < 5; i++)
{
for (j = 0; j < 5; j++)
sum += studl[i].ses[j]; // Считаем общую сумму оценок студента
if (sum / 5 > 4.0) // Высчитываем среднюю оценку и сравниваем с 4
{
cout << studl[i].name << endl; // Вывод хорошистов
cout << studl[i].group << endl;
}
else
count++;
sum = 0;
}
if (count == size)
cout << "This student are missing" << endl; // Если таких студентов нет,
тогда выводим данное сообщение на экран
system ("pause");
}
