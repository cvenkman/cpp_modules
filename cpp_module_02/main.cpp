#include <iostream>

class A {
public:
	A(){
		std::cout << "Class A" << std::endl;
	};
	 virtual void print (){std::cout << "Method A" << std::endl;};
	virtual void print2 () {
		std::cout << "Method A2" << std::endl;
	};
	~A(){};
};

class B :  virtual public  A {
public:
	B(){
		std::cout << "Class B" << std::endl;
	};
	virtual void print () {std::cout << "Method B" << std::endl;};
	void print2 () {
		std::cout << "Method B2" << std::endl;
	};

	~B(){};
};

class C : virtual public A {
public:
	C(){
		std::cout << "Class C" << std::endl;
	};
	virtual void print (){std::cout << "Method C" << std::endl;};
	~C(){};
};

class D: public B, public C {
public:
	D(){
		std::cout << "Class D" << std::endl;
	};
	virtual void print (){
		std::cout << "Method D" << std::endl;
	};
	void print2 () {
		std::cout << "Method D2" << std::endl;
	};
	~D(){};
};

void foo(A *a){
	a->print();
}

void foo1(A *a){
	a->print2();
}

int main () {
	B b;
	foo(new B());
	foo(new C());
	foo(new D());

	foo1(new B());

	b.print2();
}