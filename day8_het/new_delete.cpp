//This C++ programme demonstrate usage of {new, delete} and {malloc, free}
//Edited by Het Shah

#include <iostream>
using namespace std;

int main()			//main method starts
{
    int *ptr1;		//integer pointer
    ptr = new int;	//allocating memory using new operator
    *ptr = 40;

    int *ptr2;		//integer pointer
    ptr2 = (int*)malloc(sizeof(int));		//allocating memory using malloc function
    *ptr = 80;

    cout << "value of pointer ptr1: " << ptr1 << endl;
    cout << "value of data addressed by ptr1: " << *ptr1 << endl;

    cout << "value of pointer ptr2: " << ptr2 << endl;
    cout << "value of data addressed by ptr2: " << *ptr2 << endl;

     
    
    free(ptr1);		//deallocating memory by free function

    
    delete ptr2;		//deallocating memory by delete keyword

}//end of main function

//Conclusion is that we can assign memory using any one from malloc or new as well as we can free memory using anyone from free and delete 

