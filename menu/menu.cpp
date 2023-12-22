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

  switch (choice) {
  case 1:
    TestOPI();  // Вызов модуля TestOPI
    break;
  case 2:
    TestOAiP();  // Вызов модуля TestOAiP
    break;
  case 3:
    cout << "Выход из программы." << endl;
    break;
  default:
    cout << "Некорректный номер теста!" << endl;
    break;
  }
  return 0;
}