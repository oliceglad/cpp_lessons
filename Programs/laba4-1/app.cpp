#include <iostream>

using namespace std;

int main()
{
    int N, maxIndex, minIndex, summ, i;
    summ = 0;
    int maxValue = -10000;
    int minValue = 10000;
    cout << "Введите кол-во элементов массива: ";
    cin >> N;

    int *array = new int[N];

    //  Записываем элементы в массив и сразу ищем индексы максимального и минимального элементов

    for (i = 0; i < N; i++)
    {
        cin >> *(array + i);
    }

    for (i = 0; i < N; i++)
    {
        if (maxValue < *(array + i))
        {
            maxValue = *(array + i);
            maxIndex = i;
        }

        if (minValue > *(array + i))
        {
            minValue = *(array + i);
            minIndex = i;
        }
    }

    cout << endl
         << "Исходный массив" << endl;

    for (i = 0; i < N; i++)
    {
        cout << *(array + i) << " " << endl;
    }

    // Проверка, что больше, индекс максимального или минимального элемента
    if (maxIndex > minIndex)
    {
        // Считаем сумму от минимального до максимального элемента
        for (i = minIndex; i < maxIndex + 1; i++)
        {
            summ += *(array + i);
        }

        cout << "Сумма элементов массива от минимального до максимального элемента массива: " << summ << endl;
    }
    else if (maxIndex < minIndex)
    {
        // Считаем сумму от максимального до минимального элемента
        for (i = maxIndex; i < minIndex + 1; i++)
        {
            summ += *(array + i);
        }
        cout << "Сумма элементов массива от максимального до минимального элемента массива: " << summ << endl;
    }

    cout << "Индексы отрицательных масивов" << endl;

    for (int i = 0; i < N; i++)
    {
        if (*(array + i) < 0)
        {
            cout << i << " ";
            cout << endl;
        }
    }

    delete [ ] array;
}