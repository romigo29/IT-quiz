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
	//ВВОД ответа
	//<проверка на валидность> если ответ валидный, добавляем его в массив ответов
	}
	//<подсчёт результатов>
	//<вывод результата>
	//КОНЕЦ
	return 0;
}