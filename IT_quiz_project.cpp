#include <Windows.h>
#include "header_validity.h"
#include "menu.h"
#include "TestOAiP.h"
#include "TestOPI.h"
using namespace std;
int* answers;

void check_answers(int*, const int*, int);

int main() {
  setlocale(LC_ALL, "Russian");

  int choice = 0;
  bool testCompleted = false; // Флаг для проверки успешного выполнения теста

  while (choice != 3) {
    if (!testCompleted) {
      switch (hello()) {
      case 1:
        answers = TestOPI(answers);  // Вызов модуля TestOPI
        check_answers(answers, correctAnswersOPI, 10);
        testCompleted = true; // Устанавливаем флаг успешного выполнения теста
        break;
      case 2:
        answers = TestOAiP(answers);  // Вызов модуля TestOAiP
        check_answers(answers, correctAnswersOAIP, 15);
        testCompleted = true; // Устанавливаем флаг успешного выполнения теста
        break;
      case 3:
        cout << "Выход из программы." << endl;
        exit(0);
        break;
      default:
        if (cin.fail()) {
          cin.clear();
          cin.ignore(1000, '\n');
        }
        cout << "Некорректный выбор. Пожалуйста, выберите номер задания от 1 до 2, или 3." << endl;
        cout << "\n" << endl;
        break;
      }
    }
    else {
      // Сбрасываем флаг успешного выполнения теста
      testCompleted = false;
    }
  }

  return 0;
}

void check_answers(int* answers, const int* rightAnswers, int size) {
  int nRightAnswers = 0;
  for (int j = 0; j < size; j++) {
    if (answers[j] == rightAnswers[j]) {
      nRightAnswers++;
    }
  }
  float percentage = (static_cast<float>(nRightAnswers) / size) * 100;
  cout << "\n" << endl;
  cout << "Результаты теста:" << endl;
  cout << "Количество правильных ответов: " << nRightAnswers << endl;
  cout << "Общее количество вопросов: " << size << endl;
  cout << "Процент правильных ответов: " << percentage << "%" << endl;
  cout << "\n" << endl;
}