#include <iostream>
using namespace std;

void drawIsoscelesTriangle(int height) 
{

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawIsoscelesTrapezoid(int height, int base) {
    int topWidth = 2 * height - 1;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= base - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= topWidth + 2 * (i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() 
{

    setlocale(LC_ALL, "");
    int height, base;
    cout << "высоту треугольника и трапеции: ";
    cin >> height;
    cout << "основание трапеции: ";
    cin >> base;

    cout << "равнобедренный треугольник:" << endl;
    drawIsoscelesTriangle(height);

    cout << "равнобедренная трапеция:" << endl;
    drawIsoscelesTrapezoid(height, base);

    return 0;
}