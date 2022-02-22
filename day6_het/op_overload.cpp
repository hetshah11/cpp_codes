//This C++ programme demonstrates OPerator overloading
//Edited By: Het Shah

#include<iostream>
using namespace std;
class complex			//class complex created
	{
		int real,img;		//private members
	   public:
		complex()
			{
				real=0;
				img=0;		//constructor for initializing values
			}
		complex(int x,int y)
			{
				real=x;
				img=y;
			}
		void display()
			{			//function for displaying real and img values
				cout << "real part is " << real << endl << "imaginory part is " << img << endl;
			}
		complex operator + (complex obj)
			{					//+ operator overloading
				complex temp;
				temp.real= real+ obj.real;
				temp.img= img+ obj.img;
				return temp;
			}
		complex operator - (complex obj)
			{
				complex temp;			//- operator overloading
				temp.real= real-obj.real;
				temp.img= img-obj.img;
				return temp;
			}
		complex operator * (complex obj)
			{
				complex temp;
				temp.real= real*obj.real;	//* operator overloading
				temp.img= img*obj.img;
				return temp;
			}
		complex operator / (complex obj)
			{
				complex temp;
				temp.real= real/obj.real;	//'/' operator overloading
				temp.img= img/obj.img;
				return temp;
			}
		complex operator % (complex obj)
			{					//% operator overloading
				complex temp;
				temp.real= real%obj.real;
				temp.img= img%obj.img;
				return temp;
			}
	   	complex operator <<(int a)
			{					//<< operator overloading
				complex temp;
				temp.real= real<<a;
				temp.img= img<<a;
				return temp;
			} 
		complex operator >>(int a)
			{					//>> operator overloading
				complex temp;
				temp.real= real<<a;
				temp.img= img<<a;
				return temp;
			} 
		complex operator &(complex obj)		
			{					//& operator overloading
				complex temp;
				temp.real= real & obj.real;
				temp.img= img & obj.img;
				return temp;
			}
		complex operator |(complex obj)		
			{					//| operator overloading
				complex temp;
				temp.real= real | obj.real;
				temp.img= img | obj.img;
				return temp;
			}
		complex operator &&(complex obj)
			{					//&& operator overloading
				complex temp;
				temp.real= real && obj.real;
				temp.img= img && obj.img;
				return temp;
			}
		complex operator ||(complex obj)
			{					//|| operator overloading
				complex temp;
				temp.real= real || obj.real;
				temp.img= img || obj.img;
				return temp;
			}
		
		complex operator ++()
			{					//++ operator overloading
				complex temp;
				temp.real= real+1;
				temp.img= img+1;
				return temp;
			}
		complex operator --()
			{					//-- operator overloading
				complex temp;
				temp.real= real-1;
				temp.img= img-1;
				return temp;
			}
		complex operator +=(int a)
			{					//+= operator overloading
				complex temp;
				temp.real= real+a;
				temp.img= img+a;
				return temp;
			}
		complex operator -=(int a)
			{
				complex temp;			//-= operator overloading
				temp.real= real-a;
				temp.img= img-a;
				return temp;
			}
		complex operator *=(int a)
			{					//*= operator overloading
				complex temp;
				temp.real= real*a;
				temp.img= img*a;
				return temp;
			}
		complex operator /=(int a)
			{					//'/=' operator overloading
				complex temp;
				temp.real= real/a;
				temp.img= img/a;
				return temp;
			}
	};		//class complex ends
int main()			//main method starts
	{
		complex c1(3,4),c2(2,3);		//3 objects of complex class created
		complex c3;
		//c1.display();
		c1.display();
		c3=c1+c2;
		c3.display();

	        c3=c1-c2;
		c3.display();

		c3=c1*c2;
		c3.display();
				
		c3=c1/c2;
		c3.display();

		c3=c1.operator %(c2);
		c3.display();

		c3=c1.operator <<(5);					//All operator overloading methods invoking using operator keyword
		c3.display();

		c3=c1.operator >>(5);
		c3.display();

		c3=c1.operator ++();
		c3.display();

		c3=c1.operator --();
		c3.display();

		c3=c1.operator &(c2);
		c3.display();

		c3=c1.operator |(c2);
		c3.display();

		c3=c1.operator &&(c2);
		c3.display();

		c3=c1.operator ||(c2);
		c3.display();

		c3=c1.operator +=(5);
		c3.display();

		c3=c1.operator -=(5);
		c3.display();

		c3=c1.operator *=(5);
		c3.display();

		c3=c1.operator /=(5);
		c3.display();

		

		//c3=c1.operator <<();
		//c3.display();

		//c3=c1.operator <<();
		//c3.display();




		//c3=c1.operator

	}
