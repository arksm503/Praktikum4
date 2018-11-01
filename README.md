1.) int n=0, tb=0, x, y, bb, hb;
    tipe data integer

2.) cin>>bb; cout<<endl;
    input Banyak Jenis Barang, variabel bb
    endl : sama seperti enter

3.) for(n; n < bb; n++)
    perulangan n lebih kecil dari bb
    n+1 : setiap perulangan ditambah 1

4.) cin>>x cin>>y
    input banyak barang, variabel x
    input harga barang, variabel y

5.) hb=x*y;             //Jumlah Harga Barang Perjenis didapat dari x*y
    tb=tb+hb;           //Total Belanja didapat dari tb+hb

6.) cout<<"Jumlah Harga Barang Perjenis [" << n+1 << "] : "<<hb<<endl<<endl;
    output ambil dari rumus hb

    cout<<"Total Belanja : "<<tb<<endl<<endl;
    output ambil dari rumus tb

7.) int diskon, ab;
    tipe data integer

8.)         if (tb>1000000) {
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

    diskon=tb*0,1    //diskon 10% hasil dari tb dikali 0,10 atau 0,1
    diskon=tb*0.05   //diskon % hasil dari tb dikali 0,05
    ab=tb-diskon     //akhir bayar hasil pengurangan dari total belanja dikurang diskon
 =============================================================================================

 Jika total belanja diatas 1,000,000 maka mendapat diskon sebesar 10%
 Tetapi Jika total belanja diantara 501,000 sampai 1,000,000 maka mendapat diskon sebesar 5%
 Selain itu tidak //maksudnya dibawah 501.000 tidak mendapat diskon

Berikut Flowchart Praktikum 4 :
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum4/master/img/flowchart.png)

Screenshot Jika total bayar diatas 1 Juta :
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum4/master/img/diatas1jt.png)

Screenshot Jika total bayar diantara 501,000 hingga 1 Juta :
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum4/master/img/500k.png)

Screenshot Jika total bayar dibawah 501,000 :
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum4/master/img/dibawah500.png)




