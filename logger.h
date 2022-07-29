//
// Created by adityarana on 30/07/2022.
//

#ifndef STUFBIT_LOGGER_H
#define STUFBIT_LOGGER_H

#endif //STUFBIT_LOGGER_H

#include <iostream>
using namespace std;


class Logger {
public:
    Logger() {
        cout << "Logger initiated !" << endl;
    }

    void logd(string logString){
        cout << logString << endl;
    }
};