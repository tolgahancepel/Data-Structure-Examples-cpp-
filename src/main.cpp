#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /* ELEMANLAR ÜZERİNDE İŞLEMLER */

    int myArr[10] = { -18, -13, -8, -3, 2, 7, 12, 17};

    // Tüm elemanları yazdıralım
    cout << "Dizinin tum elemanlari:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << myArr[i] << " ";
    }
    cout << "\n\n";

    // Negatif değerleri NULL olarak değiştirelim
    for(int i = 0; i < 10; i++)
    {
        if (myArr[i] < 0) myArr[i] = 0;
    }

    // Tekrar yazdıralım
    cout << "Negatif olanlari sifir yaptik:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << myArr[i] << " ";
    }
    cout << "\n\n";

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
    cout << "Iki boyutlu dizi elemanlari:\n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << left << setw(10) << myArr2[i][j];
        }
        cout << endl;
    }

    cout << "\n\n";
    // İndisi çift olan satırları 35 yapıyoruz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j % 2 == 0) myArr2[i][j] = 35;
        }
    }

    // Tekrar yazdıralım ve görelim
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << left << setw(10) << myArr2[i][j];
        }
        cout << endl;
    }

    /*
    doküman üzerindeki örnekleri kendi derleyicinize kopyalayarak istediğiniz işlemleri
    gerçekleştirebilirsiniz.
     */

    return 0;
}