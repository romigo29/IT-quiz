#include <iostream>
#include <Windows.h>
//<определение списка вопросов и правильных ответов>
#include "question_list.h"
const int numQuestions = sizeof(questions) / sizeof(questions[0]); //вычисление количества вопросов

using namespace std;
int main() {
	//НАЧАЛО
	//<приветствие пользователя>

	for (int i = 0; i < numQuestions; i++)
	{
			
	//ВЫВОД вопроса
	//ВВОД ответа#include <iostream>
#include <Windows.h>
#include "Validity_Test/header_validity.h"
//<определение списка вопросов и правильных ответов>
#include "question_list.h"
const int numQuestions = sizeof(questions) / sizeof(questions[0]); //вычисление количества вопросов
char answers[numQuestions];//массив ответов
using namespace std;
int main() {

	//НАЧАЛО
	//<приветствие пользователя>

	for (int i = 0; i < numQuestions; i++)
	{
		//ВЫВОД вопроса
		std::cout << questions[i];
		//ВВОД ответа
		char tempAnswer;//текущий ответ, не проверенный на валидность
		std::cin >> tempAnswer;
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
	//<проверка на валидность> если ответ валидный, добавляем его в массив ответов
	}
	//<подсчёт результатов>
	//<вывод результата>
	//КОНЕЦ
	return 0;
}
