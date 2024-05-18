//#include<iostream>
//using namespace std;
//class A {
//private :
//	int a, b;
//public:
//	void showA() {
//		cout << "enter the value of a :";
//		cin >> a;
//		cout << "enter the value of b :";
//		cin >> b;
//		int sum = a + b;
//		cout << "The sum of " << a << "and " << b << "is :" << sum;
//	}
//};
//class B :public A {
//private:
//	int array[3] = {1,2,3};
//public:
//	void showB() {
//		for (int i = 0; i < 3; i++) {
//			cout << array[i];
//		}
//	}
//};
//class C :public A, public B {
//private:
//	string a;
//public:
//	void showC() {
//		cout << "Enter your Name :";
//		cin >> a;
//		cout << "You name is :" << a;
//	}
//};
//int main() {
//	C n;
//	n.showB();
//	n.showC();
//	B b;
//	b.showA();
//	system("pause");
//}