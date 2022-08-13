# stufbit


[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/open-source.svg)](https://forthebadge.com)


bit stuffing algorithm implementation !

### Usage
```cpp
#include <iostream>
using namespace std;
#include "stufbit.h"

int main() {
    // Bit Array - Header + Payload + Trailer
    // Size of Header and Trailer is predefined already, and have taken as a octet here 
    string bitarray = "011111100111111011010101010101010111111001111110";
    BitStuffing bitsuffObj = BitStuffing(bitarray, bitarray.length());
    cout << bitsuffObj.getBitStuff() << endl;
    return 0;
}
```
