#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa(); //constructor mahasiswa
};

mahasiswa::mahasiswa(){
    cout << "Constructor Terpanggil" << endl; //definisi contructor
};

int main(){
    mahasiswa mhs; //Pembuatan objek
    return 0;
}