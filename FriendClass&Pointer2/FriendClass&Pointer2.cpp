#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;

    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs{ 1 };  // Object mhs
    mhs.showNim();  // member access operator

    mahasiswa& refMhs = mhs;  // pointer reference refMhs
    refMhs.nim = 2; // member access operator
    mhs.showNim();

    mahasiswa* pMhs = &mhs;  // pointer dereference pMhs
    pMhs->nim = 3;  // Arrow Operator
    pMhs->showNim();
    return 0;
}