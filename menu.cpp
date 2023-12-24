#include <iostream>
using namespace std;

int hello() {
  cout << "Добро пожаловать в программу тестирования!" << endl;
  cout << "Выберите один из доступных тестов (или введите число 3, чтоб не проходить тест):" << endl;
  cout << "1. Тест по ОПИ" << endl;
  cout << "2. Тест по ОАиП" << endl;

  int choice;
  cout << "Введите номер теста: ";
  cin >> choice;
  return choice;
}