#include <iostream>
#include <Windows.h>
#include "header_validity.h"
#include "TestOAiP.h"
#include "TestOPI.h"
#include "menu.h"

using namespace std;

/* 
возвращаемые значения для каждой функции: 
	1 - если ответ корректен 
	0 - если нет
*/

bool check_answer_validity(char ans) //проверка валидности введённого ответа (предусмотрено до 4 вариантов)
{
	bool tr = 0;
	ans = tolower(ans);
	switch (ans)
	{
	default:
		
			cout <<"Введен некорректный вариант. Введите цифру от 1 до 4" << endl;
		break;
	case '1': case '2': case '3': case '4':
		tr = 1;
		break;
	}
	return tr;
}

bool check_russian_input(unsigned char character[50]) // провекра валидности введённых русских символов
{
	bool tr = 1;
	int i = 0;
	while (character [i] != 0)
	{
		if ( (character[i] >= russian_left_border && character[i] <= russian_right_border) || (character[i] == russian_yo_lowercase || character[i] == russian_yo_uppercase))
			tr = 1;
		else if (character[i] == space_symbol)
			tr = 1;
		else
		{
			tr = 0;
			cout <<"Введен некорректный символ. Введите русскую букву" << endl;
			break;
		}
		i++;
	}
    return tr;
}

bool check_english_input(unsigned char character[50]) // провекра валидности введённых латинских символов
{
	bool tr = 0;
	int i = 0;
	while (character[i] != 0)
	{

		character[i] = tolower(character[i]);

		if (character[i] >= english_lowercase_left_border && character[i] <= english_lowercase_right_border)
			tr = 1;
		else if (character[i] == space_symbol)
			tr = 1;
		else
		{
			
			cout <<"Введен некорректный символ. Введите латинский символ" << endl;
			tr = 0;
			break;
		}
	}
	return tr;
}

bool check_number_input(unsigned char number[50]) // проверка валидности введённых цифр
{
	bool tr = 0;
	int i = 0;
	while (number[i] != 0)
	{
		if (number[i] >= number_left_border && number[i] <= number_right_border)
			tr = 1;
		else
		{
			tr = 0;
			
			cout <<"Введен некорректный символ. Введите цифру" << endl;
			break;
		}
	}
	return tr;
}

bool check_special_symbol_input(unsigned char input) //проверка спецсимволов (в разработке)
{
	bool tr = 0;
	return tr;
}
