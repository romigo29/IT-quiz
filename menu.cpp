#include <iostream>
using namespace std;

int hello() {
    cout << "����� ���������� � ��������� ������������!" << endl;
    cout << "�������� ���� �� ��������� ������ (��� ������� ����� 3, ���� �� ��������� ����):" << endl;
    cout << "1. ���� �� ���" << endl;
    cout << "2. ���� �� ����" << endl;

    int choice = 0;
    
        cout << "������� ����� �����: ";
        cin >> choice;
        return choice;
}