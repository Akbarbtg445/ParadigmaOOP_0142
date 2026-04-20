#include <iostream>
using namespace std;

class barang {
public:
    string nama;
    int jumlah;
    string tanggalproduksi;
    string Kategori;

    void printData(){
        cout << "Nama:" <<   nama << endl;
        cout << "Jumlah:" << jumlah << endl;
        cout << "Tanggalproduksi:" <<   tanggalproduksi << endl;
        cout << "Kategori:" << Kategori << endl;
    }
};

int main (){
    barang b;
    b.nama = "HP";
    b.jumlah = 2;
    b.tanggalproduksi = "januari";
    b.Kategori = "Elektronik";

    b.printData();
}