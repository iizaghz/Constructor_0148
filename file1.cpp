// buatlah program c++ dengan kelas Barang yang memiliki atribut: namaBarang, kodeBarang
// program meiliki constructor berparameter untuk mengisi nilai namaBarang dan kodeBarang.
// serta memiliki fungsi untukmenampilkan informasi barang.

#include <iostream>
#include <string>
using namespace std;

class Barang
{
private:
    string namaBarang;
    int kodeBarang;

public:
    Barang(int kode, string nama)
    {
        namaBarang = nama;
        kodeBarang = kode;
    }

    void cetak()
    {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang  : " << kodeBarang << endl;
    }
};

int main()
{

    Barang brg(505, "Laptop");
    brg.cetak();
    return 0;
}