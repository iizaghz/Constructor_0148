#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public :
        //constructor dengan parameter
        mahasiswa(int nim, string nama);
};

//definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor dengan parameter terpanggil" << endl;
    cout << "NIM :" <<nim <<endl;
}

int main(){
    //memmanggil constructor dengan parameter
    mahasiswa mhs(12345, "Pascal");
    return 0;
}