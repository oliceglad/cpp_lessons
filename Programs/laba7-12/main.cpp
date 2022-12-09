#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool IsCorrect(int n1, int n2)
{
    if (n1 < n2)  return true;
    else return false;
}

bool IsCubeDigits(int n)  {
    int summ_cube =0, digit, copy = n;

    while (copy > 0) {
        digit = copy%10;
        copy /=10;
        summ_cube += pow(digit, 3);
    }

    if (summ_cube == n) return true;
    else return false;
}

int main() {
    setlocale(0, "");
	int start, end, i, N, count = 0;
	cout << "Введите интервал:  " << endl;
	cin >> start >> end;

    if (IsCorrect(start, end)) {
        cout << "Интервал верный:" << endl;
    
        for (i = start; i < end+1;  i++) {
            if (IsCubeDigits(i)) {
                count++;
            }
        }

    } else {
        cout << "Интервал неверный:" << endl;
    }

    cout << "Кол-во простых чисел, цифры которых образуют возрастающую последовательность: " << count << endl;
}