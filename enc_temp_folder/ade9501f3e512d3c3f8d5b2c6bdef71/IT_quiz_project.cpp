#include <Windows.h>
#include "header_validity.h"
#include "menu.h"
#include "TestOAiP.h"
#include "TestOPI.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
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
