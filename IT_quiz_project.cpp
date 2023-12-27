#include <Windows.h>
#include "header_validity.h"
#include "menu.h"
#include "TestOAiP.h"
#include "TestOPI.h"
using namespace std;
int* answers;

void check_answers(int*,const int*,int);

int main() {

	//НАЧАЛО
	//<приветствие пользователя>
	 
	switch (hello()) {
	case 1:
		answers=TestOPI(answers);  // Вызов модуля TestOPI
		check_answers(answers, correctAnswersOPI, 10);
		break;
	case 2:
		answers=TestOAiP(answers);  // Вызов модуля TestOAiP
		check_answers(answers, correctAnswersOAIP, 15);
		break;
	case 3:
		cout << "Выход из программы." << endl;
		break;
	default:
		cout << "Некорректный номер теста!" << endl;
		break;
	}
	//<вывод результата>
	//КОНЕЦ
	return 0;
}
void check_answers(int* answers,const int* rightAnswers, int size)
{
	int nRightAnswers=0;
	for (int j = 0; j < size; j++)
	{
		if (answers[j]==rightAnswers[j])
		{
			nRightAnswers++;
		}
	}
	cout << "правильных ответов: " << nRightAnswers << "/" << size;
}
