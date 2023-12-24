#include <Windows.h>
<<<<<<< HEAD
#include "header_validity.h"
#include "menu.h"
#include "TestOAiP.h"
#include "TestOPI.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
=======
#include "menu/menu.h"
#include "TestOAip/TestOAiP.h"
#include "TestOPI/TestOPI.h"
#include "Validity_Test/header_validity.h"
//<определение списка вопросов и правильных ответов>

int main() {

>>>>>>> 61c0ddfa06d9ece008e94035fb4edc403f8a377d
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

<<<<<<< HEAD

=======
>>>>>>> 61c0ddfa06d9ece008e94035fb4edc403f8a377d
	//<подсчёт результатов>
	
	//<вывод результата>
	//КОНЕЦ
	return 0;
}
