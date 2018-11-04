#include <iostream>
#include <bitset>
#include "binary.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean ss(20);
    ss.print();
    ss.bitOn(14);
    ss.print();

    //system("read");
    return EXIT_SUCCESS;
}