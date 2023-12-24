#include <Windows.h>
#include "menu/menu.h"
#include "TestOAip/TestOAiP.h"
#include "TestOPI/TestOPI.h"
#include "Validity_Test/header_validity.h"
//<определение списка вопросов и правильных ответов>

int main() {

	//НАЧАЛО
	//<приветствие пользователя>
	 
	switch (hello()) {
	case 1:
		TestOPI();  // Вызов модуля TestOPI
		break;
	case 2:
		TestOAiP();  // Вызов модуля TestOAiP
		break;
	case 3:
		cout << "Выход из программы." << endl;
		break;
	default:
		cout << "Некорректный номер теста!" << endl;
		break;
	}

	//<подсчёт результатов>
	
	//<вывод результата>
	//КОНЕЦ
	return 0;
}
