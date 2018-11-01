#include <iostream>
using namespace std;
int main()
{
    int n=0, tb=0, x, y, bb, hb;
    cout<<"PEMBAYARAN SEDERHANA"<<endl<<endl;
    cout<<"Input Banyak Jenis Barang : ";
    cin>>bb;
    cout<<endl;
        for(n; n < bb; n++) {
            cout<<"Input Banyak Barang Perjenis [" << n+1 << "] : ";
            cin>>x;
            cout<<"Input Harga Barang Perjenis [" << n+1 << "] : ";
            cin>>y;
            hb=x*y;
            tb=tb+hb;
            cout<<"Jumlah Harga Barang Perjenis [" << n+1 << "] : "<<hb<<endl<<endl;
        }

        cout<<"Total Belanja : "<<tb<<endl<<endl;

        int diskon, ab;
        if (tb>1000000) {
           diskon=tb*0.1;
           ab=tb-diskon;
            cout<<"SELAMAT ANDA MENDAPATKAN DISKON 10% "<<endl
            <<"Total Akhir Pembayaran : "<<ab<<endl<<endl;
        }else if (tb>501000) {
           diskon=tb*0.05;
           ab=tb-diskon;
            cout<<"SELAMAT ANDA MENDAPATKAN DISKON 5% "<<endl
            <<"Total Akhir Pembayaran : "<<ab<<endl<<endl;
        }else
            cout<<"Total Akhir Pembayaran : "<<tb<<endl<<endl;

return 0;
}
