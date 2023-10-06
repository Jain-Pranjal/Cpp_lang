// we use the c++ as it is more close to the hardware of the computer .
// as it is a compiled language so it is more faster than the interpreterd language and more close to the hardware 

#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main(){
    cout<<"hello world\n";
    cout<<"this is pranjal jain\n";
    int a=5;
    cout << a<<"\n";

    // for writing the name of the variable and text separate the variable with the <<
    cout<<"this is "<<a<<" a number\n";
    // so in this way we can combine the variable and other string by using the <<

    // for declaring a variable 

    // taking input and showing output 
    // int age; //declaring the variable with its datatype 
    // cout<<"Enter the age";
    // cin>>age;
    // cout<<"your age is "<<age<<" years old\n";

    // in the c++ we need to define the datatype of the variable that we r using 

    // for storing the character we use the char 
    // for storing the string we use the string 
    char character='P';
    char letter1[20]="pranjal";
    char letter2[20]="jain";

    // char is in single commas 
    // string is in double commas 
    cout<<character<<"\n";
    cout<<letter1<<"\n";
    // cout<<strcat(letter1,letter2)<<"\n";



    int x=55,y=96;
    cout<<x+y;

    // use the const keyword if we dont want to change the value of the variable 
    const int salary=100;
    // now this salary cannot be changed throughout the whole program and cannot be assigned a new value 
    // salary=55;
    // now this is not a modifiable value 

// the float has the low precision value as compared to the double 
// float has 7 and double has the precision value of 15

    // char datatype store only the single character in the single quotes
    // string is stored inside the " "
    
    // string is not a built in datatype we have to incluse the header file of the string 
    // #include <string>  is the header file 
    
    // cstring file works only on the array of the char 

    // in this the logical operator are && || and ! 

    // concatenation in the string 
    string fname="pranjal";
    string mname=" kumar";
    string lname=" jain";
    cout<<fname+mname+lname;
    // we can also use the strcat function for the concatenation 
    
    // for using some of the math fucntion of the x++ incluse the cmath library
    
    // using the if else statements

    // always rember that the char are alwyas enclosed inside the ' ' 

    /*
    int age;
    char gender;
    cout<<"Enter the age : \n";
    cin>>age;
    cout<<"Enter the gender M/F/O\n";
    cin>>gender;
    if (age<18){
        cout<<"u cannot vote\n";
    }
    else if (age>18 && age<65)
    {   if(gender=='M'){
            cout<<"u r male and can vote";
        }
        else if (gender=='F'){
            cout<<"u r female and can vote";
        }
        else if (gender=='O'){
            cout<<"u r trans and can vote";
        }
        else{
            cout<<"Wrong input ";
        }
        
    }
    else{
        cout<<"u are too old";
    }

    */
    // in this way we can use the if - else - elif statement 

    // we can use the ternary operator for writing the if statement and else statemtnt in the short term 
    
    
    
    
    
    // also to take the string as a whole we have to use the getline function whoich takes the cin and the string variable name as the parameter
    // string b;
    // cout<<"Enter the fname : \n";
    // getline(cin,b);
    // // cin>>b;
    // cout<<"your name is "<<b;    
    

    // again 
    // string myname;
    // cout<<"Enter the full name : \n";
    // // cin>>myname;
    // // in this way we can take the whole string as the input 
    // getline(cin,myname);
    // cout<<"the full name is "<<myname;
    // here cin will take only the single string as an input but we want to give a while string even separated by the whitespace so instead of taking the input using the cin we will use the getline () function which takes the cin and the storing input variavble name as parameter 

// cout does not print the next line but print in python does that so we should use the \n 

// nested loop 
for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<j<<"\n";
    }
}






    return 0;
// as we can see that it only print the inital name as c++ treats the whitespace and tab as the terminator of the line so if we want to take the whole string as the input then we have to use the getline ()

// now we dont require the cin as it will be managed by the getlien function as it takes the parameter of cin and the stringname variable 

}


// C++ is more powerful than C as it has the concepts of the OOPS
// in C++ we can do the memory management by ourdekf only 
// the compiler converts the c++ program into the format that the computer can understand such as the low level lang or th emachine level lang which is th eexecutable format




/*
we can omit the use of the using namespace std by using the std keyword by ::

#include <iostream>
int main(){
    std::cout<<"my name is pranjal jain";
    return 0;
}

so remember that we can omit the use of the namespace by using the std::
*/

// char is denoted by the single quotes and string is denoted by the double quotes


// variable declare 














