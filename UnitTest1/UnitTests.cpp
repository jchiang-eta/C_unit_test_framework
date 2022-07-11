#include "pch.h"
#include "CppUnitTest.h"
#include "../Jesse_Project/input.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(number, 51);
		}
	};

	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			std::string pos = "RF";
			Assert::AreEqual(position, pos);
		}
	};
}

