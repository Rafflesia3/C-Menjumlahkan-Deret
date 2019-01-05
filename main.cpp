#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int i,a,jumlah;

    cout << "\t\t Pelita Bangsa \n\n" << endl;
    cout << "=========================================\n" << endl;
    cout << "Nama    : Rafi Alwan Setyawan \nNIM     : 311810325 \nKelas   : TI.18.D7 \n" << endl;
    cout << "=========================================\n" << endl;

    cout<< "\t     Fungsi Menjumlahkan deret\n" << endl;

    cout<<"Ini adalah deret bilangan :";cin>>a;
    for (i=1;i<=2*a;i++)
    {
        if(i&2!=0)

            cout<<i<<"+";
    }
    cout<<endl;
    cout<<"Jumlah Bilangan Adalah ";
    jumlah=a*a;
    cout<<jumlah;
    return 0;
}
