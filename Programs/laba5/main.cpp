#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Введите кол-во строк: ";
    cin >> A;

    cout << "Введите кол-во столбцов: ";
    cin >> B;
    int a[A][B];

    cout << "Добавьте элементы матрицы: " << endl;

    // Добавить в матрицу элементы
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cin >> a[i][j];
        }
    }

    // Исходная матрица:

    cout << "Исходная матрица: " << endl;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Поменять местами максимальные и минимальные элементы матрицы
    for (int i = 0; i < A; i++) {
        int min = 0, max = 0;
        for (int j = 0; j < B; j++) {
            if (a[i][min] > a[i][j]) {
                min = j;
            }
            if (a[i][max] < a[i][j]) {
                max = j;
            }
        }
        int temp = a[i][min];
        a[i][min] = a[i][max];
        a[i][max] = temp;
    }

    // Вывести матрицу 

    cout << "Вывод матрицы: " << endl;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
