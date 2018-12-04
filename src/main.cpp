#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* ELEMANLAR ÜZERİNDE İŞLEMLER */

    // Toplamda 10 elemanı olan bir dizinin ilk 8 elemanını atıyoruz
    int myArr[10] = { -18, -13, -8, -3, 2, 7, 12, 17};

    // Tüm elemanları yazdıralım
    for(int i = 0; i < 10; i++)
    {
        cout << myArr[i] << " ";
    }
    cout << endl;

    // Negatif değerleri NULL olarak değiştirelim
    for(int i = 0; i < 10; i++)
    {
        if (myArr[i] < 0) myArr[i] = 0;
    }

    // Tekrar yazdıralım
    for(int i = 0; i < 10; i++)
    {
        cout << myArr[i] << " ";
    }
    cout << endl;

    /* İKİ BOYUTLU DİZİ ÜZERİNDE İŞLEMLER */

    int myArr2[5][8];

    // Tüm elemanları dönen ve rastgele sayılar atayan bir döngü kuralım
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            myArr2[i][j] = rand() % 100;
        }
    }

    // Oluşan değerleri yazdıralım
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << left << setw(10) << myArr2[i][j];
        }
        cout << endl;
    }

    return 0;
}