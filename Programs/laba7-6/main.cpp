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

bool IsAcsend(int n) {
    int count_len = 0, copy = n, count_voszrt = 0,i=0;

    while(copy){
        copy/=10;
        count_len++;
    }

    int arrDigit[count_len];
    
    while (n > 0) {
        arrDigit[i] = n%10;
        n /=10;
        i++;
    }

    for(int i = 0; i < count_len+1; i++) {
        if (i > 0) {
            if (arrDigit[i-1] >= arrDigit[i]) count_voszrt++;
        }
    }

    if (count_voszrt == count_len) return true;
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
           cout << i << endl;
           if (IsSimple(i)) {
                if (IsAcsend(i)){
                    count++;
                }
            }
        }

    } else {
        cout << "Интервал неверный:" << endl;
    }

    cout << "Кол-во простых чисел, цифры которых образуют возрастающую последовательность: " << count << endl;
}