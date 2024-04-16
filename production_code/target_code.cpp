#include "target_code.h"

#include <chrono>
#include <iostream>

using namespace std;

void printTime()
{
    auto now = chrono::system_clock::now();
    time_t time = chrono::system_clock::to_time_t(now);

    cout << ctime(&time) << "\n";
}