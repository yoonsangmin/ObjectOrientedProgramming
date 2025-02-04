#pragma once

#include <iostream>

class NameCard
{
public:
    NameCard(const std::string& name, const std::string& phoneNumber, const std::string& address, const std::string& job)
        : name(name), phoneNumber(phoneNumber), address(address), job(job)
    {
    }

    inline void ShowData() const
    {
        std::cout << "이    름: " << name << "\n";
        std::cout << "전화번호: " << phoneNumber << "\n";
        std::cout << "주    소: " << address << "\n";
        std::cout << "직    급: " << job << "\n";
    }

private:
    std::string name;
    std::string phoneNumber;
    std::string address;
    std::string job;
};