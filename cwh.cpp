#include<iostream>
#include<string>
#include<cmath>
// we try to give the camleCase notation 
using namespace std;


int fun(int a ){
    cout<<"my age is "<<a;
}

// by deadzult access modifire is private so we have to make it public
class Employee{
    public:

    string name;
    int salary;

    void details(){
        cout<<"the name of the employee is "<<this->name<<" and the salary is "<<this->salary<<endl;
    }

    void pass(){
        cout<<"the secret pass is "<<secret;
    }
    private:
    int secret;
    // cannot access directly from outisde but we can use it within the members of the class
};

// so rather than using the object name in th eprint statemnt we can use the this operator this -> variable 
// this basically tells that it is the current object and we are pointing toward it only

// by using this operator we need not to specifically use the object name again and again  so it will be general use of the object name


// the variable declared inside the private is not accessed by outside the code but it is accessed by the other memebers inside the class


int main(){
    cout<<"hello world ";
    const int a=55;
    int const b=8;
    // b=77;
    // a=7;
    // we cannot assign a value to a constant variable 
// write liek const datatype variableName
    string name;
// the string takes the space and tab as erminating character so we need to use the getliens function for taking the input as a whole string 
    // cout<<"Enter your full name : ";
    // getline(cin,name);
    // cout<<"your name is "<<name;
// so use the getline() to enter a whole string at once

cout<<(int)19.656451/8;
// so we need ot do the typecasting to get the desired results
// int it int 
// int float float 
// float float float 


int i =1;
while(i<36){
    cout<<"we are at index "<<i<<"\n";
    i++;
    // we need to provide the incremenmt condition otherwise it is in the infinete loop
}

// we need to give the return tpe of the function as which type of datatype it will return to the functioncall 

// fun(4);

// basically in array we dont have the dect function to fins the size of the array 
int arr[10]={1,23,6,5,4,1,2,8,9,66};
// arraySize
int arrSize=sizeof(arr)/sizeof(int);
// the size of caluclate the size in the bytes so for finiding the no of elemetns inside the array we need to divide the size by the size of the datatype of th array
cout<<"there are "<<arrSize<<" elements\n";
// looping 
// for (int i=0;i<arrSize;i++){
//     cout<<arr[i]<<"\n";
// }

// we cam also use the for each loop to loop the array 
for (int i : arr) {
  cout << i << "\n";
}



/*
USER DEFINED ARRAY 
// if we want to take the user defined array 
int size;
cout<<"specify the size of the array : ";
cin>>size;
int myarr[size];
for(int i=0;i<size;i++){
    cout<<"Enter the element "<<i<<" : ";
    cin>>myarr[i];
}
cout<<"your array is :\n";
for (int i=0;i<size;i++){
    cout<<myarr[i]<<"\n";
}

*/

/*
MAKING A 2D ARRAY OR MATRIX
// so we make the 2d array inside the 2 curly bracket same like in python 

int arr2d[3][3]={
    {5,9,8},
    {66,51,5},
    {51,33,99}
};
// we have make a 2d array which is same as the matrix 

// looping inside a 2d array 
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        cout<<"the value at "<<i<<","<<j<<" is : "<<arr2d[i][j]<<"\n";
    }
}

 */
// string function 
string hello="pranjal jain";
cout<<"\n"<<hello.length();// we use the length function to find the lenght of the string 
cout<<"\n"<<hello.substr(1,8);
cout<<"\n"<<hello.substr(3,9);
cout<<"\n"<<hello.substr(2,6);

// the substr returns the new string and it takes 2 parameter  pos and len 
// pos means from where u want the substr and len measn how much characters of the string u want from that position 


// pointer is a specialtype of variable that store the address of the other variable 
// oops basiaclly is a techniqe of doing  the programming in this we creaet the template of the object which is a real world entity and we make the class for that 
// it basically enable use for DRY principal


// making a object
Employee harry;
harry.name="harry bhai";
harry.salary=100;
harry.details();



return 0;

}
// first we have to include the preprocessor directive to use the basic funciton in the header files 
// so bascially we need to use the using namespace std everytime as we need to define the variable name 
// the execution starts from the main function itslef 
// string is a datatype that is not built in so we need to import that and it is enclosed in " " 
// for the characters it is enclosed in ' ' single inverted commas 
// so for the string we need to import the string header file

// the various type of integer datatype is 
// short int long longlong 

// if we want the value to get not changes then we can use the const keyword 
// float double longDouble are the decimal datatypes 



// if we dont usde the break in the switch statement then all the cases will get on and all will get done also 

/*
what are arrays 
they basically store the same type of datatypr 

it is not necessary to define the size off the array but for our undestanding we provde the size */

// if we want to do the typecasting just put any datatype in the (int)













