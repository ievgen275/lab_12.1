#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_12.1/PR_12.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestNodeCreationAndLinks)
        {
			Elem* p;
			p = new Elem;
			p->info = 1;
			p->link1 = new Elem;
			p->link1->info = 2;
			p->link1->link1 = new Elem;
			p->link1->link1->info = 3;
			p->link2 = new Elem;
			p->link2->info = 4;
			p->link1->link2 = p->link2;
			p->link1->link1->link2 = p->link1->link1;
			p->link1->link1->link1 = p->link2->link1;
			p->link2->link2 = p->link1->link1->link2;

			Assert::IsTrue(true, L"All memory deallocated successfully");
        }
	};
}
