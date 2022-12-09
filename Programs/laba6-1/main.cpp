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
        if(arr[1][strlen(arr[1])-1] == arr[i][strlen(arr[i])-1]) {
            if (i != 1) {
                count++;
                cout << arr[i] << endl;
            }
        }
    }

    cout << "Кол-во слов заканчивающиеся на ту же букву что и второе слово: " << count << endl;
 
    return 0;
}