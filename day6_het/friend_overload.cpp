//This C++ programme demonstarates operator overloading using friend function
//Edited By; Het Shah

#include <iostream>

using namespace std;
    class complex
        {		//class complex starts
          int real,img;		//private members
          
          public:
            //void setInput(int,int);
	    complex(int x,int y)
		{			//constructor for initializing values
			real=x;
			img=y;
		}
	    void display()		//function to display values
			{
				cout << "real part is " << real << endl << "imaginory part is " << img << endl;
			}
               
            friend complex operator +(complex,complex);		//friend function declaration
        };	//class complex ends
complex operator +(complex obj1, complex obj2)
	{
		complex temp(0,0);				//Operartor overloading
		temp.real=obj1.real+obj2.real;
		temp.img=obj1.img+obj2.img;
		return temp;
	}

int main()		//main method starts
{
    //int a,b;
    complex c1(3,4),c2(2,3),c3(0,0);		//3 objects created of class complex
    c3=operator +(c1,c2);
    c3.display();

   
    
    return 0;
}
