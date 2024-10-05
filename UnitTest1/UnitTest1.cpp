#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№5.5/AP_Lab№5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int n = 10;
            int k = 5;
            int expected = 252;
            md = 0;
            int result = bc(n, k, 0);
            Assert::AreEqual(expected, result);
			Assert::IsTrue(md > 0);
		}
	};
}
