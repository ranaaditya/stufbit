#include <iostream>
using namespace std;
#include "stufbit.h"
#include "logger.h"
int main() {
    cout << "Hello bit stuffing !" << std::endl;

    string bitarray = "01111110011111101101010101010101001111110";
    BitStuffing bitsuffObj = BitStuffing(bitarray, bitarray.length());
    bitsuffObj.getBitStuff();

    Logger logger = Logger();
    //logger.logd("hi", "i", "am", "a", "logger");
    return 0;
}
