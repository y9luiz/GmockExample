#include "time_mock.hpp"

namespace {
    TimeMock * g_mock = nullptr;
}

TimeMock::TimeMock()
{
    g_mock = this;
}

TimeMock::~TimeMock(){
    g_mock = nullptr;
}

std::chrono::system_clock::time_point std::chrono::system_clock::now() noexcept
{
    if(!g_mock)
    {
       return {};
    }
    return g_mock->nowProxy();
}

