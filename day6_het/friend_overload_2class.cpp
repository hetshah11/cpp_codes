//This C++ programme demonstrates operator overloading using friend function which is member function to another class
//Edited By; Het Shah 


#include <iostream>

using namespace std;
    class ABC;		//class ABC declared
    class complex		//class complex created
        {	
          int real,img;		//private members
          
          public:
            //void setInput(int,int);
	    complex(int x,int y)
		{			//constructor for initializing values
			real=x;
			img=y;
		}
	    void display()		//function for display
			{
				cout << "real part is " << real << endl << "imaginory part is " << img << endl;
			}
               
            friend complex ABC :: operator +(complex,complex);		//friend function declaration 
        };
	class ABC		//class ABC created
	{
	    public:
		complex operator +(complex obj1, complex obj2)
		{
		complex temp(0,0);
		temp.real=obj1.real+obj2.real;				//operator overloading function which is mwmber function to class ABC
		temp.img=obj1.img+obj2.img;
		return temp;
		}
	};		//class ABC ends here


int main()		//main method starts here
{
    //int a,b;
    complex c1(3,4),c2(2,3),c3(0,0);	// 3 objects of class complex created
    c3=operator +(c1,c2);
    c3.display();

    
    return 0;
}
