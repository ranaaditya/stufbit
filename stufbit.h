//
// Created by adityarana on 29/07/2022.
//

#ifndef STUFBIT_STUFBIT_H
#define STUFBIT_STUFBIT_H

#endif //STUFBIT_STUFBIT_H
/**
 * @author https://github.com/ranaaditya
 */

#include <iostream>
using namespace std;

// Bit Array = Header + Payload + Trailer
// Size of Header and Trailer has been predefined and taken as an Octet (8 bits)
class BitStuffing {
private:
    string bitArray;
    string bitArrayWithoutSequences;
    int lengthOfBitArray;
    int frameLength;

public:
    string getBitStuff() {
        int startIndex = frameLength, endIndex = lengthOfBitArray-(this->frameLength + 1);

        std::cout << "Starting sequence: " << bitArray.substr(0, frameLength) << std::endl;
        std::cout << "Ending Sequence:" << bitArray.substr(lengthOfBitArray-frameLength, lengthOfBitArray) << std::endl;

        string tempFrame = bitArray.substr(startIndex, startIndex+frameLength);
        for(int i = startIndex; i <= endIndex; i++) {
            tempFrame = bitArray.substr(startIndex, frameLength);

            if(bitArray.substr(startIndex, 5) == "11111" && bitArray.substr(startIndex, 6) == "111111") {
                cout << "Bit Stuffling happening at:" << startIndex+5 << endl;
            }
            startIndex += 1;

        }
        return tempFrame;
    }

    BitStuffing(string bitarray, int length, int frameSize = 8) { // framesize has been taken as an octet by default
        this->bitArray = bitarray;
        this->lengthOfBitArray = length;
        this->frameLength = frameSize;
        this->bitArrayWithoutSequences = bitarray.substr(frameLength, lengthOfBitArray - (2*frameSize));
        std::cout << "Data Payload: " << bitArrayWithoutSequences << std::endl;
    }
};
