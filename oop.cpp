#include <iostream>
using namespace std;
class Mahasiswa {
    public:
    int nim;
    string nama;
    float nilai;
void PrintData(){
cout << "NIM: " << nim << endl;
cout << "Nama:" << nama << endl;
cout << "Nialai :" << nilai << endl;
}
};

int main() {
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "Abra";
    mhs.nilai = 90.5;

    mhs.PrintData();
}