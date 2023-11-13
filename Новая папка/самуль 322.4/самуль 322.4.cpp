#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Число | Квадрат | Куб" << endl;
    cout << "---------------------" << endl;

    for (int i = 1; i <= 10; ++i) {
        int square = i * i;
        int cube = i * i * i;

        cout << i << "     | " << square << "      | " << cube << endl;
    }

    return 0;
}
