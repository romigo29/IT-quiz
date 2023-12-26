#include <iostream>
#include "TestOAiP.h"
#include "header_validity.h"
using namespace std;

int* TestOAiP() {
    setlocale(LC_ALL, "Russian");
    const int numquestionsOAIP = sizeof(questionsOAIP) / sizeof(questionsOAIP[0]); //вычисление количества вопросов
    int answers[15]{};

    for (int i = 0; i < numquestionsOAIP; i++)
    {
        //ВЫВОД вопроса
        cout << questionsOAIP[i];
        //ВВОД ответа
        char tempAnswer;//текущий ответ, не проверенный на валидность
        cin >> tempAnswer;
        //<проверка на валидность> если ответ валидный, добавляем его в массив ответов
        if (check_answer_validity(tempAnswer))
        {
            answers[i] = tempAnswer;
        }
    }
    return answers;
}

