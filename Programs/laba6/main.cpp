#include "iostream"
#include "string.h"
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    char Str[80];
    char* arr[100];
    char ch[10];
    int count = 0;
    char* str;
    int k = 0;

    
    cout << "Введите предложение: "; cin.getline(Str, 80);
    cout << "Введите строку:  "; cin.getline(ch, 10);

    str = strtok(Str, " ,.-");
    while (str != NULL)
    {
        arr[k] = str;
        k++;
        str = strtok(NULL, " ,.-");
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < strlen(ch); j++) {
            if (arr[i][0] == ch[j]) {
                count++;
                cout << arr[i] << endl;
                break;
            }
        }
    }

    cout << count << endl;
 
    return 0;
}