//#include<iostream>
//using namespace std;
//class A {
//protected:
//	int a, b;
//public:
//	void show() {
//		cout << "Enter the value of a and b:";
//		cin >> a >> b;
//		cout << "The value of a is:" << a << endl << "The value of b is :" << b << endl;
//	}
//};
//class B : public A {
//protected:
//	int a, b;
//public:
//	void show2() {
//		this->a = a;
//		this->b = b;
//		cout << "In the Class B :" << endl;
//		cout << "So the adress of a is :" << &a << endl;
//		cout << "And the adress of b is :" << &b;
//
//	}
//};
//	int main() {
//		A obj;
//		obj.show();
//		B obj2;
//		obj2.show2();
//		cout << endl;
//		system("pause");
//	}