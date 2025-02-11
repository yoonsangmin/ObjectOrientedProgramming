#pragma once

#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

// 전방 선언 (Forward Declaration).
// 왜? 헤더 순환 참조.
// 컴파일 속도 개선.
class FirefighterBase;
class Firetruck
{
public:
    Firetruck()
    {
        // 직접 생성할 수도 있고 팩토리 패턴을 사용해서 받아올 수도 있음. 생명 주기는 직접 관리.
        ladder = new Ladder(10.0f);
    }

    ~Firetruck()
    {
        delete ladder;
    }

    void Drive(const Point& position)
    {
        if (driver == nullptr)
        {
            return;
        }

        std::cout << position << " 위치로 소방차 이동 중.\n";
    }

    const Ladder* GetLadder() const { return ladder; }

    const Hose* GetHose() const { return hose; }
    void SetHose(Hose* hose) { this->hose = hose; }

    FirefighterBase* GetDriver() const { return driver; }
    void SetDriver(FirefighterBase* driver) { this->driver = driver; }

private:
    FirefighterBase* driver = nullptr;

    // 합성(Composition) - 직접 생성 또는 팩토리 패턴에 생성 요청. 생명 주기 관리.
    Ladder* ladder = nullptr;

    // 집합(Aggregation) - 다른 곳에서 객체를 받아올 수 있음. 생성 주기 관리 X.
    Hose* hose = nullptr;
};