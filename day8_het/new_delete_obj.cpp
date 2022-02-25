//This is C++ programme that demonstrates diffrent usecases of new,delete,malloc and calloc.
//Edited By; het Shah

#include <iostream>
using namespace std;

class Demo			//demo class strats here
{
    public:

        			//private members
        int a1,a2,a3;

        Demo()      //default constructor
        {
            cout << "Inside constructor" << endl;
            a1=0;
	    a2=0;
            a3=10;
        }

        ~Demo()      //destructor
        {
            cout << "Inside destructor" << endl;
        }
};  //end of Demo class


int main()
{

    
    int *ptr1, *ptr2;		//creating 2 int tyoe pointers
    int sum;	
   

    Demo d1;		//creating object of class Demo
    Demo *d2,*d3,*d4,*d5;			//creating 4 Demo class type pointers, here no memory is being allocated to objects 
  

    cout << "size of(d1) " << sizeof(d1) << " and sizeof(d2) " << sizeof(d2) << " and size of value of pointer(*d2) " << sizeof(*d2) << endl;
 

    //allocated memory space using new operator
    ptr1 = new int;	//allocating memories to integers
    ptr2 = new int;

    d2 = new Demo;		//allocating memory to object

    d3 = new Demo [5];		//allocating memory to array of object

    d4 = new Demo;		//allocating memory to object
    //a4 = NULL;

    d5 = (Demo *)malloc(sizeof(Demo));			//allocating memory to object ny malloc function, here constructor won't be called as we are allocating it by malloc function
    

    cout << "Enter 2 numbers: ";
    cin >> *ptr1 >> *ptr2;
    
    sum = *ptr1 + *ptr2;
    cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << endl;

    //delete pointer variables
   								//here we can't delete object d1 as it was not allocated memory dynamically
    delete d2;
    delete[] d3;  //deleting array of objects			//every time we use delete keyword with object, destructor will be called
    delete d4;

    
    free(d5);		//deallocating objbect d5 by free function. Here destructor won't be called.

}   //end of main function


