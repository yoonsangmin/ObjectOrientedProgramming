#pragma once

class Rectangle
{
public:
    Rectangle(float width, float length)
        : width(width), height(length)
    {
    }

    inline float GetArea() const
    {
        return width * height;
    }

    inline float GetSize() const
    {
        return 2 * (width + height);
    }

private:
    float width;
    float height;
};