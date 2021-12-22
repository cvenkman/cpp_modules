#include <iostream>
#include <string>

class A {
	public:
	virtual void foo() = 0;
	virtual void boo() = 0;
};

void A::foo() {std::cout << "eee\n"; }

class B : public A {
	public:
	void foo() {std::cout << "cccc\n"; }
	void boo() {std::cout << "cccc\n"; }
};

int main() {
	B b;
	b.foo();

	// b.boo();
	
}