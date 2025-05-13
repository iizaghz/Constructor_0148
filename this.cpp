#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
        string satget(string jdl)
        {
            //nilai parameter 'judul' untuk member variabel 'judul'
            this->judul =jdl;
            //return variabel judul
            return this->judul;
        }
};