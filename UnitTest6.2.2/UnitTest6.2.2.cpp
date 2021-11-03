#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2.2/lab6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 2, -1, 4, 3 };
			int t = Amount(a, 4, 0, 0);
			Assert::AreEqual(t, 3);
		}
	};
}
