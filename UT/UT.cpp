#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Admin\source\repos\L2\L2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

	namespace UnitTest1 {

		TEST_CLASS(UnitTest1) {

		public:
			TEST_METHOD(Test1) {
				const int n = 8;
				int vec[n] = { 45, 56, 2, 90, 34, 5, 45, 1 };
				int vecSort[n] = {1, 2, 5, 34, 45, 45, 56, 90};

				Sort QS;
				QS.quicksort(vec, 0, 7);

				for (int i = 0; i < n; i++) {
					Assert::AreEqual(vec[i], vecSort[i]);
				}
			}

			TEST_METHOD(Test2) {
				const int n = 4;
				int vec[n] = { 5, 5, 5, 5 };
				int vecSort[n] = {5, 5, 5, 5};

				Sort QS;
				QS.quicksort(vec, 0, 3);

				for (int i = 0; i < n; i++) {
					Assert::AreEqual(vec[i], vecSort[i]);
				}
			}


			TEST_METHOD(Test3) {

				const int n = 8;
				int vec[n] = { 45, -56, 1, 90, 34, -5, 45, 0 };
				int vecSort[n] = {-56, -5, 0, 1, 34, 45, 45, 90};

				Sort QS;
				QS.quicksort(vec, 0, 7);
				for (int i = 0; i < n; i++) {
					Assert::AreEqual(vec[i], vecSort[i]);
				}

			}
		};
	}


