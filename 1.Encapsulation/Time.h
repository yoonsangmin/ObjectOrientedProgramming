#pragma once

#include <iostream>

class Time
{
public:
    Time(int hour, int minute = 0, int second = 0)
        : hour(hour), minute(minute), second(second)
    {
    }

    inline void ShowTime() const
    {
        std::cout << "[" << hour << "시 " << minute << "분 " << second << "초]\n";
    }

    inline void ShowTimeInSeconds() const
    {
        std::cout << hour * 3600 + minute * 60 + second << "초\n";
    }

private:
    int hour;
    int minute;
    int second;
};