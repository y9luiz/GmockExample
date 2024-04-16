#include "../production_code/target_code.h"

#include <time_mock.hpp>

#include <gtest/gtest.h>

using namespace testing;

TEST(CallNow, ShouldReturn)
{
    TimeMock time;
    auto duration10Sec = std::chrono::duration<int>(10);
    EXPECT_CALL(time,nowProxy()).WillOnce(Return(std::chrono::system_clock::time_point(duration10Sec)));

    printTime();
}