
#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 5.2/ЛР 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test52
{
	TEST_CLASS(test52)
	{
	public:

		TEST_METHOD(TestA)
		{
			double a = A(2, 1, 3);
			Assert::AreEqual(0.25, a, 1e-9);
		}

		TEST_METHOD(TestS)
		{
			int n = 0;
			double s = 0;
			double result = S(2, 0.01, n, s);
			Assert::AreEqual(263.0 / 480, result, 1e-9);
			Assert::AreEqual(2, n);
		}
	};
}
