#pragma once

// # define M_PI           3.14159265358979323846 
#define _USE_MATH_DEFINES
#include <math.h>

class Circle
{
public:
    Circle(float radius)
        : radius(radius)
    {
    }

    inline float GetArea() const
    {
        return M_PI * radius * radius;
    }

    inline float GetSize() const
    {
        return 2.0f * M_PI * radius;
    }

private:
    float radius;
};