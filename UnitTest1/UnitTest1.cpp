#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab12.4/Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestTrainsAfterTime)
        {
            string destination[] = { "����", "�����", "�����", "���" };
            int type[] = { REGULAR, COMFORT, EXPRESS, REGULAR };
            string departureTime[] = { "18:00", "15:30", "12:00", "08:30" };
            const int N = 4;

            string inputTime = "12:00";
            bool found = false;
            for (int i = 0; i < N; i++) {
                if (departureTime[i] > inputTime) {
                    if (destination[i] == "�����" || destination[i] == "����") {
                        found = true;
                    }
                }
            }

            Assert::IsTrue(found);
        }
    };
}
