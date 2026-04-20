#include <iostream>
using namespace std;
class kategori {
public:
string Elektronik;
string NonElektronik;};
class barang {
    public:
string nama;
int jumlah;
string Kategori;
string tanggalproduksi;
void printData(){
 cout << "Nama:" <<   nama << endl;
 cout << "Jumlah:" <<   jumlah << endl;
 cout << "Tanggalproduksi:" <<   tanggalproduksi << endl;
 cout << "kategori:" <<   Kategori << endl;
}
};

int main (){
    barang b;
    kategori k;
    b.nama = "HP";
    b.jumlah = 2;
    b.tanggalproduksi = "januari";
    k.Elektronik;

}