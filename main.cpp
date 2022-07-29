#include <iostream>
using namespace std;
#include "stufbit.h"
int main() {
    cout << "Hello bit stuffing !" << std::endl;

    string bitarray = "01111110011111101101010101010101001111110";
    BitStuffing bitsuf = BitStuffing(bitarray, bitarray.length());
    bitsuf.getBitStuff();
    return 0;
}
