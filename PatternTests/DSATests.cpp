#include "pch.h"
#include "CppUnitTest.h"
#include "../DSA_Console/Risotto.h"

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
				vector<int> d_data{ 1,1,1,2,2,3,3,3,4,4 };
				ContainsDuplicates dupes = ContainsDuplicates();
				Assert::IsTrue(dupes.SortedSolution(b_data));
				std::sort(b_data.begin(), b_data.end());
				//Assert::AreEqual(b_data, d_data);
			}
			TEST_METHOD(DidItLink)
			{
				const size_t n{ 100 };
				const size_t constSizeType{ 50 };

				int array[constSizeType];

				for (auto& x : array) x = 0;
			}
	};
}