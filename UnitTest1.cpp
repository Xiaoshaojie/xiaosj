#include "pch.h"
#include "CppUnitTest.h"
#include "../Project4/sum.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[6] = { -2,11,-4,13,-5,-2 }, max;
			max = maxSubArraySum(arr, 6);
			Assert::AreEqual(max, 20);
		}
		TEST_METHOD(TestMethod2)
		{
			int arr[5] = { -1,-2,-5,-4,-7 }, max;
			max = maxSubArraySum(arr, 5);
			Assert::AreEqual(max, 0);
		}
		TEST_METHOD(TestMethod3)
		{
			int arr[5] = { -1,2,3,-6,7 }, max;
			max = maxSubArraySum(arr, 5);
			Assert::AreEqual(max, 7);
		}
		TEST_METHOD(TestMethod4)
		{
			int arr[6] = { 1,4,5,7,9,10 }, max;
			max = maxSubArraySum(arr, 6);
			Assert::AreEqual(max, 36);
		}
	};
}
