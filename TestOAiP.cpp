#include <iostream>
#include "TestOAiP.h"
#include "header_validity.h"
using namespace std;

int* TestOAiP() {
    setlocale(LC_ALL, "Russian");
    const int numquestionsOAIP = sizeof(questionsOAIP) / sizeof(questionsOAIP[0]); //���������� ���������� ��������
    int answers[15]{};

    for (int i = 0; i < numquestionsOAIP; i++)
    {
        //����� �������
        cout << questionsOAIP[i];
        //���� ������
        char tempAnswer;//������� �����, �� ����������� �� ����������
        cin >> tempAnswer;
        //<�������� �� ����������> ���� ����� ��������, ��������� ��� � ������ �������
        if (check_answer_validity(tempAnswer))
        {
            answers[i] = tempAnswer;
        }
    }
    return answers;
}

