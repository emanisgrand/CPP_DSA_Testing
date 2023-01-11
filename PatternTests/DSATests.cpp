#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DSATests
{
	TEST_CLASS(SimpleTests) 
	{
		public:
			TEST_METHOD(CheckingForDuplicates) 
			{
				vector<int> a_data{1,2,3,1};
				vector<int> b_data{ 1,1,1,3,3,4,3,2,4,2 };
				ContainsDuplicates dupes = ContainsDuplicates();
				Assert::IsTrue(dupes.BruteForce(a_data));
				Assert::IsTrue(dupes.BruteForce(b_data));
			}

			TEST_METHOD(CheckForDupesAfterSorting)
			{
				vector<int> b_data{ 1,3,1,3,4,3,2,1,4,2 };
				ContainsDuplicates dupes = ContainsDuplicates();
				Assert::IsTrue(dupes.BruteForce(b_data));
			}
	};
}