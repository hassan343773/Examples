// Members functions in class:
	         // 1:Members functions are the function that operate on data ns encapsulted in class.
//2:We cn define memebers function inside the clss OR we cn define members function outside the class
	//-But they must be declared in class defination.
              /*  Function inside the class body :
	Class classname {
	 .......
public:
	return type function name() {

	}
	   };*/
//Program:
//#include<iostream>
//using namespace std;
//class student {
//	int rollno;
//public:
//	void show(int arollno) {
//		rollno = arollno;
//		cout << "Roll no:" << rollno;
//	}
//
//   };
//int main() {
//	student p;
//	p.show(18);
//	cout << endl;
//	system("pause");
//}
       // Function Outside the class body:
		//	class classname {
		/*	.......
				return type function name();
		};
		  Return type
		class name::function name()          1:(::)>scope resolution operator
		  {

		}*/
     //Program:
//#include<iostream>
//		  using namespace std;
//		  class student {
//			  int rollno;
//		  public:
//			  void show(int arollno);
//		  };
//		  void student:: show(int arollno) {
//			  rollno = arollno;
//              cout<<"Roll no :"<<rollno;
//		  }
//   int main(){
// student p;
// p.show(22);
// cout<<endl;
// system("pause");
// }
