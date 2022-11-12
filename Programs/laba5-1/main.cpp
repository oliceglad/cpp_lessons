#include <iostream>
using namespace std;
 
void changeCols(int matr[], int rows, int cols, int col1, int col2){
    int tmp;
    for(int i = 0; i < rows; i++){
        tmp = matr[i * rows + col1];
        matr[i * rows + col1] = matr[i * rows + col2];
        matr[i * rows + col2] = tmp;
    }
}
 
int main(){
    int a, b, m, n;
    cout << "Кол-во столбцов:  "; cin >> a;
    cout << "Кол-во строк: "; cin >> b;
    
    int matr[a][b];
    srand(time(NULL));

    // Создание матрицы с рандомными числами от -50 до 101
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            matr[i][j] = -50 + rand() % 101;
            cout << matr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Число m: "; cin >> m;
    cout << "Число n: "; cin >> n;

    // Меняем местами столбцы с номерами m и n
    changeCols(reinterpret_cast<int *>(matr), a, b, m, n);

    // Исходная таблица
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << matr[i][j] << "\t";
        }
        cout << endl;
    }

    // Вычисление произведения элементов
    long int mul = 1;
    for(int i = 0; i < a; i++){
        mul *= matr[i][m] * matr[i][n];
    }

    cout << "Произведение элементов: " << mul << endl;
    return 0;
}