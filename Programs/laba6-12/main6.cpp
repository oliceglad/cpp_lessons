#include "iostream"
#include "string.h"
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    char Str[80];
    char* arr[100];
    int count = 0;
    char* str;
    int k = 0;

    
    cout << "Введите предложение: "; cin.getline(Str, 80);

    str = strtok(Str, " ,.-?");
    while (str != NULL)
    {
        arr[k] = str;
        k++;
        str = strtok(NULL, " ,.-");
    }

    for (int i = 0; i < k; i++) {
        if(arr[k-1][0] == arr[i][0]) {
            if (i != k-1) {
                count++;
                cout << arr[i] << endl;
            }
        }
    }

    cout << "Кол-во слов начинающиеся на ту же букву что и последнее слово: " << count << endl;

    return 0;

}