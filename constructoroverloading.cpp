#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private :
        int nim;
        string nama;
    public :
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int iNim, string iNama);
        void cetak();
};

mahasiswa :: mahasiswa(){  
}
mahasiswa :: mahasiswa (int iNim){
    nim = iNim; //definisi hanya NIM
}
mahasiswa :: mahasiswa(string iNama){
    nama = iNama; //definisi hanya NAMA
}

void mahasiswa::cetak(){
    cout << endl << "Nim = " <<nim << endl;
    cout << "Nama =" << nama << endl;
}

int main(){
    mahasiswa mhs1(102030); //hanya nim
    mahasiswa mhs2("Andi"); //hanya nama
     mahasiswa mhs3(010203, "Santi"); //NIM dan nama
}
