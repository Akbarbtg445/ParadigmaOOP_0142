#include <iostream>
using namespace std;

class baseClass  final{
    public:
    virtual void perkenalan(){
        cout << "Hallo saya function dari beda class";
    }
};
class baseClass1  {
    public:
    virtual void perkenalan(){
        cout << "Hallo saya function dari beda class";
    }
};


class derivedClass : public baseClass1 {
    public:
    void perkenalan1 () {
        cout << "Hallo saya function dari derived Class";
    }
};
int main () {
    derivedClass a;
    a.perkenalan1();

    return 0;
}