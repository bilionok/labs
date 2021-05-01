#include "pch.h"
#include "CppUnitTest.h"
#include "../8_1_2/8_1_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char check[] = "csa_on_sc"; // створюється строка 
			Assert::AreEqual(true, Include(check, 0)); // перевіряється строка
			char check_2[] = "gsa_no_sqwr";
			Assert::AreEqual(true, Include(check_2, 0));
		}
	};
}
