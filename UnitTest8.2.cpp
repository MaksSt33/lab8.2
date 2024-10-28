#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2/lab8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestRemoveNonLetters)
		{
			Assert::AreEqual(string("abc"), RemoveNonLetters("a1b2c3"));
		}
	};
}
