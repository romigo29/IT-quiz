#include <Windows.h>
#include "Validity_Test/header_validity.h"
#include <hello.h>
//<определение списка вопросов и правильных ответов>
#include "question_list.h"
const int numQuestions = sizeof(questions) / sizeof(questions[0]); //вычисление количества вопросов
char answers[numQuestions];//массив ответов
using namespace std;
int main() {

	hello();

	//НАЧАЛО
	//<приветствие пользователя>

	for (int i = 0; i < numQuestions; i++)
	{
		//ВЫВОД вопроса
		cout << questions[i];
		//ВВОД ответа
		char tempAnswer;//текущий ответ, не проверенный на валидность
		cin >> tempAnswer;
		//<проверка на валидность> если ответ валидный, добавляем его в массив ответов
		if (check_answer_validity(tempAnswer))
		{
			answers[i]=tempAnswer;
		}
		
	}
	//<подсчёт результатов>
	
	//<вывод результата>
	//КОНЕЦ
	return 0;
}
