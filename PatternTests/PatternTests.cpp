#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PatternTests
{
	TEST_CLASS(SimpleTests) 
	{
	public:
		TEST_METHOD(QuickTest) 
		{
			string expected = "fartshit";
			SimpleClass test = SimpleClass();
			Assert::AreEqual(test.SimpleMethod(), expected);
		}

		TEST_METHOD(CheckingForDuplicates) 
		{
			vector<int> data{1,2,3,1};
			ContainsDuplicates dupes = ContainsDuplicates();
			Assert::IsTrue(dupes.BruteForce(data));
		}
	};
}