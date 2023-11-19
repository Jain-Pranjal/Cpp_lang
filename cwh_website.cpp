#include<iostream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
// basically this is use to give the library name to all the identifiers and the othe variable as the standard name 

int c=20;  //global variable decalre outside the function 

int fun(){
    return c;
}
int main(){
// for the fucntion decalaration we define the function above the main and write its defination outside the return 
// same thing we dok for the classes decalration while creating the objects for it 
// in c++ for writing the string we use the string lib as string is not a built in datatype so we need to include that also
// for the character storing we use the ' ' char datatype  
// for the string we use the " "  string datatype


// we have 2 types of variable local and global variable 



int c=55; //local variable 
cout<<c<<"\n";
// int b= fun();
// cout<<b;
// inside the fucntion it is a local variable and outisde it is a global variable 

// also we need to make sure how to take the input as a string and a character 

/*
srting and character input taking 

char alph;
cout<<"Enter the character : ";
cin >>alph;
cout<<alph<<"\n";
// the getline functionn if used after the cin then it will not ignore the leading space and will stop reading 
// so for using the getline we need to use the cin.ignore()

string fullName;
cout << "Type your full name: ";
cin.ignore();
// here getline will ignore the whitespace and will take the input of the string 
getline (cin, fullName);
cout << "Your name is: " << fullName;
*/


/*
int a = 4, b = 5;
// in post only the opeation is done but not printed but in pre operation and print both done 
    cout << "The value of a++ is " << a++ << endl; //memory ke under value has been increased but not printed yet
    cout<<a<<endl;
    cout << "The value of a-- is " << a-- << endl;  //memory ke under bascially kam ho gye hai but not printed yet
    cout<<a<<endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
*/


// for using the manupilators we use the lib iomanip

// to set the wodth in the output we use the setw()
cout << setw(100) << "pranjal jain " << endl;
cout<<setw(55)<<"*** hello this is new program ***"<<endl;

// we use the manupilators for formatting the output 


// string is just like a array of the characters used to store the charactes of the same type of data into in it ina  continuous mem loc



/*
// array store the dataitems in the continuous memory location and and it only contains the data of the same datatype only 

// so basically we can find the size of the array using the sizeof() function but it tells the size in bytes so we need to divide it by size of the datatype of the array store
int arr[]={5,4564,56,456,456,4,5};
cout<<"the no of elements inside the array : "<<sizeof(arr)/sizeof(int)<<endl;  //no of elements inside the aaraay 

// array is mutable in nature 
arr[0]=8999;
// iterating each element inside the array 
// we need to run the loop till the every element so we need to know the total element inside the array so no of elements 
int noe=sizeof(arr)/sizeof(int);
for (int i =0;i<noe;i++){
    cout<<arr[i]<<endl;
}

*/



/*
// pointers is the data type that store the address of the variable in it 
// pointer is iteself a variable that store the address of another variabel 
string food="burgir";
string *ptr=&food; // it store the address of the nfood variable 
// pointer must be of the same datatype as of thr variable we are pointing to it 
// & is used to store the address
cout<<&food<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;  //if we print the *ptr then t will print the value itself 


// so & is used for theaddress and the pointer is the variable to whcih we store the addrss of the other variable in it 

// printing the pointer address
cout<<&ptr<<endl;
// we can aslo store the pointer address in abother pointer by using the multi *
string **ptr1=&ptr;
cout<<ptr1<<endl;

// We can use any level pointer in C. There is no restriction about it but it makes the program very complex and vulnerable to errors.

// if we want to point the 2 pointer to the  3 pointer then use ***

string ***ptr2=&ptr1;
cout<<&ptr1<<endl;
cout<<ptr2<<endl;


// if we print thr *ptr then it print the value to which it is pointing and this is known as derefencing 
// & stored the address in the pointer 
// * bascailly defrencing ke kaam aata hai as it print the value of the variable 

// by storing the address of the one pointer inside the another pointer this is called the pointer to pointer 
// we can make multiple pointer to poienter using the * multiple times 

// changing the value using the pointer 
cout<<endl;
cout<<"the value of food is : "<<*ptr<<endl;
*ptr="pizza"; //so basically we change the value using the pointer 
cout<<"the updated value of food is : "<<*ptr<<endl;



// storing the address of the array inside the pointer 
// WE DONT USE THE & TO STORE THE ADDRESS OF THE ARRAY INTO THE POINTER  JUST WRITE THE NAME OF THE ARRAY 
// storing the address of the array inside the pointer is diff from storing the address of the variable inside the pointer thats why we dont use the & 

*/

// storing the array's address we only need to write the name of the array 
int marks[]={78,94,41,45,88};
int *ptr=marks;
// the name of the array is the address of the first index of the array 
cout<<"the address of the array is : "<<ptr<<endl;
// cout<<"the value of marks[0] is "<<*(ptr+1);

cout<<*ptr<<endl;

// if we want to access more value of the array 
cout<<*(ptr+1)<<endl;  //it will give the next value of the array 

// so basically the array name is the address of the first index itself so for the pointer we need only the name of the array 

// array ke index ka first element he uska address hota hai and uski value he first element hoti hai 


cout<<endl<<"all values are : "<<endl;
// accessing all the values of the array using pointer 
for(int i=0;i<sizeof(marks)/sizeof(int);i++){
    cout<<*(ptr+i)<<endl;
}


// array is used for storing continuous memory allocation in side the array 























    return 0;
}

int pluss(int a){
    a=8;
    return a;
}