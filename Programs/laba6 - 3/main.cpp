#include "iostream"
// #include "string.h"
 
using namespace std;
 
int main()

{
    setlocale(LC_ALL, "Russian");
    char Str[80];
    char* arr[100];
    char ch[10];
    int count = 0;
    // bool flag = false;
    // bool flag_word = false;
    char* str;
    int k = 0;
    // int count_len = 0;
    // int count_len_ch = 0;
    // int i = 0;
    // int j = 0;

    
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

    // cout << count << endl;

    // while (Str[i] != '\0')
    // {
    //     ++i;
    //     count_len ++;
    // }

    // while (ch[j] != '\0')
    // {
    //     ++j;
    //     count_len_ch ++;
    // }


    // for(int i=0; i<count_len; i++){
    //     if (Str[i]==' ') {
    //         cout << endl; 
    //         flag = false;
    //         flag_word = false;
    //     }
    //     else {
    //         if (Str[i-1] == ' ' ) {
    //             for (int j = 0; j < count_len_ch; j++) {
    //                 if (Str[i] == ch[j] && !flag) {
    //                     count++;
    //                     flag = true;
    //                     flag_word = true;
    //                     break;
    //             }
    //         }
    //         }
    //         if (flag_word) {
    //             cout << Str[i];
    //         }

    //     }        
    // }
    cout << endl << count << endl;
    return 0;
}