#include <iostream>

using namespace std;

int main()
{
    int sayi[3];


    for (int i = 0; i < 3; i++) {
        cout << (i + 1) << ". Sayıyı Giriniz: ";
        cin >> sayi[i];
    }


    for (int i = 0; i < 3; i++) {
        if (sayi[i] % 2 == 0 && sayi[i] % 8 == 0) {
            cout << "Sayı " << sayi[i] << " çift ve 8'e tam bölünüyor." << endl;
        }
        else {
            cout << "Sayı " << sayi[i] << " çift değil veya 8'e tam bölünmüyor." << endl;
        }
    }

    return 0;
}
