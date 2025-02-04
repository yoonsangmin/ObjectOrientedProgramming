//// 다른 헤더에 iostream이 있어서 안 써줘도 작동...
//// #pragma once가 있어서 중복 포함을 방지함.
//// 좋은 습관이 아님.
//#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Time.h"
#include "NameCard.h"


int main()
{
    // 1번 문제.
    Rectangle rectangle = Rectangle(3.0f, 4.0f);    // 가로, 세로 길이 전달.
    std::cout << "면적: " << rectangle.GetArea() << "\n";
    std::cout << "둘레: " << rectangle.GetSize() << "\n";

    Circle circle = Circle(5.0f);                 // 원의 반지름 전달.
    std::cout << "면적: " << circle.GetArea() << "\n";
    std::cout << "둘레: " << circle.GetSize() << "\n";
 
//// 출력 결과.
// 면적: 12
// 둘레 : 14
// 면적 : 78.5
// 둘레 : 31.4

    // 2번 문제.
    Time time1 = Time(10);            // 10시 0분 0초.
    Time time2 = Time(10, 20);        // 10시 20분 0초.
    Time time3 = Time(10, 20, 30);    // 10시 20분 30초.

    time2.ShowTime();
    time2.ShowTimeInSeconds();

//// 출력 결과.
// [10시 20분 0초]
// 37200초

    // 3번 문제.
    // NameCard(이름, 전화번호, 주소, 직급);
    NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "서울시...", "Freelancer");
    jang.ShowData();

//// 실행 결과
// 이    름: Jang Se Yun
// 전화번호: 010-1111-1111
// 주    소: 서울시...
// 직    급: Freelancer
}