﻿#include <iostream>

using namespace std;

struct Elem {
	Elem *link1,
		 *link2;
	int info;
};

Elem *p;

int main() {
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
}