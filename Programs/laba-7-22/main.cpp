#include <iostream>
#include <string>
using namespace std;

bool IsCorrect(int n1, int n2)
{
    if (n1 < n2)  return true;
    else return false;
}
bool IsSimple(int n)
{
	int k = 2;
		while (k * k <= n)
		{
			if (n % k == 0)
				return false;
			k++;
		}

	return true;
}

bool SumDigIsM(int n, int m) {
    int copy = n, summDigit = 0, digit;

    while(copy){
        digit = copy % 10;
        summDigit += digit;
        copy /=10;
    }

    if (summDigit == m) return true;
    else return false;
}

int main() {
    setlocale(0, "");
	int start, end, i, N, count = 0, m_number;
	cout << "Введите интервал:  " << endl;
	cin >> start >> end;
    cout << "Введите число m:  " << endl;
    cin >> m_number;

    if (IsCorrect(start, end)) {
        cout << "Интервал верный:" << endl;
    
        for (i = start; i < end+1;  i++) {
           cout << i << endl;
           if (IsSimple(i)) {
                if (SumDigIsM(i, m_number)){
                    count++;
                }
            }
        }

    } else {
        cout << "Интервал неверный:" << endl;
    }

    cout << "Кол-во простых чисел, цифры которых образуют возрастающую последовательность: " << count << endl;
}