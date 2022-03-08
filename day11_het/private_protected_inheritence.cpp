#include<iostream>
using namespace std;

class base			//base class created
	{
		protected:		//protected variable
		int i,j;

		public:		//public methods
		void set(int a,int b)	
			{
				i=a;
				j=b;
			}
		void show()
			{
				cout << i << " " << j << endl;
			}
	};		//base class ends here

class derived1 : protected base		//derived1 class derived from base class in protected mode
						//here all protected and public members of base class are inherited in derived1 class
	{
		int k;
		public:
		void setk()
			{
				k=i*j;
			}
		void showk()
			{
				cout << k << endl;
			}
	};		//derived1 class ends
class derived2 : public derived1	//derived1 class derived from base class in protected mode
					//here all public and protected members of base class are inherited in derived2 class
	{
		int m;
		public:
		void setm()
			{
				m=i-j;
			}
		void showm()
			{
				cout << i << " " << j << endl;	
			}		
	};		//derived2 class ends


int main()
	{		//main() method starts
		derived1 ob1;		//created object of derived1 class
		ob1.set(1,2);		//Invoking base class method from it's grandchild
		ob1.show();		//Invoking base class method from it's grandchild
		//derived2 ob2;

		//ob1.set(1,2);
		//ob1.show();
		
		//ob2.set(3,4);
		//ob2.show();

		return 0;
	}		//main() method ends
