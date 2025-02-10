﻿#pragma once

#include <string>
#include <iostream>
#include "Firetruck.h"

class Firefighter
{
public:
    Firefighter(const std::string& name)
        : name(name)
    {
    }
    
    virtual ~Firefighter() = default;

    // 불 끄기(ExtinguishFire).
    virtual void ExtinguishFire()
    {
        std::cout << name << " 소방관이 불을 끄고 있음!\n";
    }

    // 운전(Drive).
    void Drive(Firetruck* truckToDrive, const class Point& position)
    {
        // 운전자 확인.
        if (truckToDrive->GetDriver() != this)
        {
            return;
        }

        // 이동.
        truckToDrive->Drive(position);
    }

    // Getter/Setter.
    const std::string GetName() const { return name; }
    void SetName(const std::string& name)
    {
        this->name = name;
    }

private:
    std::string name;
};