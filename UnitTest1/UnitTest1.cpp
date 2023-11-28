#include "pch.h"
#include "CppUnitTest.h"
#include"..\\classlab13.2.2\lab.cpp"
#include <iostream>
#include <cmath>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double calculateSum(double x, double y) {
    return x + y;
}

TEST_CLASS(MyTestClass)
{
public:

    TEST_METHOD(CheckSumGreaterThanEqual10)
    {
        double x = 5.0;
        double y = 6.0;

        double sum = calculateSum(x, y);

        Assert::IsTrue(sum >= 10, L"Sum should be greater than or equal to 10.");
    }
};