#include <iostream>
#include <Windows.h>
#include "TestOPI.h"
#include "header_validity.h"
using namespace std;
void TestOPI() {
    setlocale(LC_CTYPE, "Russian");
    const int numquestionsOPI = sizeof(questionsOPI) / sizeof(questionsOPI[0]);
    int answers[10]{};
    for (int i = 0; i < numquestionsOPI; i++)
    {
        //ВЫВОД вопроса
        cout << questionsOPI[i];
        //ВВОД ответа
        char tempAnswer;//текущий ответ, не проверенный на валидность
        cin >> tempAnswer;
        //<проверка на валидность> если ответ валидный, добавляем его в массив ответов
        if (check_answer_validity(tempAnswer))
        {
            answers[i] = tempAnswer;
        }

    }
}
