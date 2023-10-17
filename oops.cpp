// create the function declaration here
// so basically create the fucntion just before the main statement in here 
#include<iostream>
#include<string>
using namespace std;

string details(string fname,string mname,string lname,int age);

int age(int prev_age);

int myarray(int array[5]);

int sum(int k){
    //giving the base condition
    if (k>0){
        return k + sum(k-1);
    }
    else{
        return 0;
    }
}


int main(){
// Function quick revision 
// so we create the declaration of the function above the maina nd do the defination of the function after the main 
// we call the function inside the main parameter 

// the funciton defination contains the parameter and the function call contains the argumnet in it 

details("pranjal","kumar","jain",20);

// so the function takes the parameter n it and do th computing with those parameter and we pass the argumentin it during the function call

// RETURN value of the function 
// keep in mind that the return type must be same datatype of the function type and we can store the value of the function return in the variable also

int a=age(55);
int wow=a+10;
cout<<wow<<"\n";
// same return type of the function

int array[5]={1,2,5,5,8};
myarray(array);

// function overloading means that function with the same name but diff parameter in it 
// function overriding means having same name , same parameter , same return type but we can change the defination of the function means we can change what a function do and this is called the function overriding 
// function overriding is done in inheritence 

// we use the fucntion overloadig becasue that instead of using the 2 diff function for the same thing we can overlaod it only 
// same name but diff parameter
// multiple function can have the same name but diff parameter and this is called the function overloading 


// RECURSION 
// BASICALY WE NEED TO PROVIDE THE BASE CONDITION FOR IT TO STOP 

int result=sum(10);
cout<<"the sum is "<<result<<"\n";


















































    return 0;
}


// giving the function defination here 
string details(string fname,string mname,string lname,int age){
    cout<<"your fname is "<<fname<<" middle name is "<<mname<< " last name is "<<lname<<" and your age is "<<age<<"\n";
    int age_plus_5=age+5;
    cout<<"your future age after 5 years is : "<<age_plus_5<<"\n";
}

int age(int prev_age){
    return prev_age-5;
    // so the datatype of the return and the function must be same 
}


// also for looping inside the array we can use the for each loop
int myarray(int array[5]){
    for(int i=0;i<5;i++){
        cout<<array[i]<<"\n";
    }
}






































































