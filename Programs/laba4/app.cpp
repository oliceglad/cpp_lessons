#include <iostream>

using namespace std;

int main()
{
    int N, maxValue, summ, maxIndex, i;
    summ = 0;
    maxValue = -10000;
    cout << "Введи кол-во элементов массива:  ";
    cin >> N;

    int *array = new int[N];
    
    for (i = 0; i < N; i++) {
        cin >> *(array + i);
        if (*(array + i) > maxValue) {
            maxValue = *(array + i);
        }
    }
    
    cout << endl << "Исходный массив" << endl;
    
    for (i = 0; i < N; i++) {
        cout << *(array + i) << " ";
    }
    cout << endl;
    
    for (i = 0; i < N; i++) {
        if (maxValue == *(array + i)) {
            maxIndex = i;
        }
    }
    
    for (i = 0; i < maxIndex; i++) {
        summ += *(array + i);
    }
    
    cout << "Сумма элементов массива до максимального элемента массива: " << summ << endl;
    
    cout << "Индексы отрицательных масивов" << endl;
    
    for (int i = 0; i < N; i++){
        if (*(array + i) < 0) {
            cout << i << " ";
            cout << endl;
        }
    }
    
    delete [ ] array;
}
