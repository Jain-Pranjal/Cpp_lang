#include<iostream>
#include<string>
#include<cmath>
// we try to give the camleCase notation 
using namespace std;


int fun(int a ){
    cout<<"my age is "<<a;
}

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

fun(4);


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