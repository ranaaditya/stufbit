#include <iostream>
using namespace std;
#include "stufbit.h"
#include "logger.h"
int main() {
    cout << "Hello bit stuffing !" << std::endl;

    string bitarray = "011111100111111011010101010101010111111001111110";
    BitStuffing bitsuffObj = BitStuffing(bitarray, bitarray.length());
    bitsuffObj.getBitStuff();
    return 0;
}
