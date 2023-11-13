#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int count = 0;
    int totalSum = 0;

    while (true) {
        int number;
        cout << "Введите число (для завершения введите 0): ";
        cin >> number;

        if (number == 0) {
            break;
        }

        count++;
        totalSum += number;
    }

    if (count > 0) {
        double average = static_cast<double>(totalSum) / count;
        cout << "Количество чисел: " << count << endl;
        cout << "Общая сумма: " << totalSum << endl;
        cout << "Среднее арифметическое: " << average << endl;
    }
    else {
        cout << "Вы не ввели ни одного числа" << endl;
    }

    return 0;
}