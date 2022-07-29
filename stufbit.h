//
// Created by adityarana on 29/07/2022.
//

#ifndef STUFBIT_STUFBIT_H
#define STUFBIT_STUFBIT_H

#endif //STUFBIT_STUFBIT_H

//
// Created by adityarana on 29/07/2022.
//

#include <iostream>
using namespace std;

class BitStuffing {
private:
    string bitArray;
    int lengthOfBitArray;
    int frameLength;

public:
    string getBitStuff() {
        int startIndex = frameLength, endIndex = lengthOfBitArray-(this->frameLength + 1);
        std::cout<<std::endl << this->bitArray << std::endl;

        string tempFrame = bitArray.substr(startIndex, startIndex+frameLength);
        for(int i = startIndex; i <= endIndex-frameLength; i++) {
            tempFrame = bitArray.substr(startIndex, startIndex+frameLength);
            startIndex += frameLength;
            std::cout << tempFrame << std::endl;
        }
    }

    BitStuffing(string bitarray, int length, int frameSize = 8) {
        this->bitArray = bitarray;
        this->lengthOfBitArray = length;
        this->frameLength = frameSize;
    }
};