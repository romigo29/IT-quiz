#include <iostream>
using namespace std;

int hello() {
  cout << "����� ���������� � ��������� ������������!" << endl;
  cout << "�������� ���� �� ��������� ������ (��� ������� ����� 3, ���� �� ��������� ����):" << endl;
  cout << "1. ���� �� ���" << endl;
  cout << "2. ���� �� ����" << endl;

  int choice;
  cout << "������� ����� �����: ";
  cin >> choice;

  switch (choice) {
  case 1:
    TestOPI();  // ����� ������ TestOPI
    break;
  case 2:
    TestOAiP();  // ����� ������ TestOAiP
    break;
  case 3:
    cout << "����� �� ���������." << endl;
    break;
  default:
    cout << "������������ ����� �����!" << endl;
    break;
  }
  return 0;
}