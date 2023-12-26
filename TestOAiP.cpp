#include <iostream>
#include "TestOAiP.h"
#include "header_validity.h"
using namespace std;

void TestOAiP(int* answers) {
    setlocale(LC_ALL, "Russian");
    const int numquestionsOAIP = sizeof(questionsOAIP) / sizeof(questionsOAIP[0]); //���������� ���������� ��������
    answers = new int[15];

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
}

