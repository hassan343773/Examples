//#include<iostream>
//using namespace std;
//
//class MyBaseClass {
//protected:
//	int protectedVar; // Protected member
//
//public:
//	MyBaseClass(int value) : protectedVar(value) {}
//
//	void AccessProtectedVar() {
//		cout << "ProtectedVar from MyBaseClass: " << protectedVar << endl;
//	}
//};
//class MyDerivedClass : public MyBaseClass {
//public:
//	MyDerivedClass(int value) : MyBaseClass(value) {}
//
//	void AccessProtectedVarFromDerived() {
//		cout << "ProtectedVar from MyDerivedClass: " << protectedVar << endl;
//	}
//};
//
//int main() {
//	MyBaseClass baseObject(42);
//	MyDerivedClass derivedObject(77);
//
//	baseObject.AccessProtectedVar(); // Access from the base class
//	derivedObject.AccessProtectedVar(); // Access from the derived class
//	derivedObject.AccessProtectedVarFromDerived(); // Access from the derived class
//	return 0;
//}
//
