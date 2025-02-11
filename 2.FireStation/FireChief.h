#pragma once

#include "FirefighterBase.h"

class FireChief : public FirefighterBase
{
public:
    FireChief(const std::string& name, FirefighterBase* numberOne = nullptr)
        : FirefighterBase(name), numberOne(numberOne)
    {
    }

    // 불 끄기 위임 함수.
    void TellFirefighterToExtinguishFire(FirefighterBase* collegue)
    {
        collegue->ExtinguishFire();
    }

    // 재정의.
    virtual void ExtinguishFire() override
    {
        if (numberOne == nullptr)
        {
            return;
        }
        
        TellFirefighterToExtinguishFire(numberOne);
    }

    const FirefighterBase* GetNumberOne() const { return numberOne; }
    void SetNumberOne(FirefighterBase* numberOne) { this->numberOne = numberOne; }

private:
    FirefighterBase* numberOne = nullptr;
};