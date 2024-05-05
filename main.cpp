/*����������� ������ �������-������� �� ������ ��������*/

#include <iostream>
#include <list>
using namespace std;

void numbers_sort(list <long long> numbers) {
    numbers.sort();

    for (long long nums : numbers) {
        cout << "\n" << nums << " " << endl;
    }
}


int main() {
    setlocale(LC_ALL, "ru");

    list <long long> numbers = { 87776665522, 89991112233, 82221110000,};

    cout << "������ ��������� �� ����������: ";
    for (long long nums : numbers) {
        cout << "\n" << nums << " " << endl;
    }
    cout << endl;


    cout << "������ ��������� �����: ";
    numbers_sort(numbers);

    return 0;
}