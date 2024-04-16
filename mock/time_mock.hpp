#pragma once

#include <chrono>

#include <gmock/gmock.h>

class TimeMock
{
public:
    TimeMock();
    ~TimeMock();

    MOCK_METHOD(std::chrono::system_clock::time_point, nowProxy,(),(noexcept));
};