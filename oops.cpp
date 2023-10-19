// create the function declaration here
// so basically create the fucntion just before the main statement in here 

// class is made above the main and we create the object inisde the main 

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


// we make the class here above the main function
class myclass{
    // so basically we declare the public to access all thr variable outisde the code also 
    public:
        int num;
        string name;
};

// so make the template of the class above the main function and the object creation inside the main function 


// adding the function inside the class
class myclass2{
    public:
        void myfun(string name){
            cout<<"hello  world Welocme : "<<name;
        }

};


// making function outside the class 
class myclass3{
    public:
    // decalre the function inside the class so that we can access it 
        void mymethod();
        // only the decalration of the function  is done 

};

// now we can define the method outside the class 
void myclass3 ::mymethod(){
    cout<<"hemlooo sbko";
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

// Function Overlaoding means that we can create as many as function having the same name with diff parameter 
// a functioncan be overlaod by changing the number of the parameters or the by changing the datatype of the parameter 


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

// we use the strucutre in the C lang and in C++ we use the class and objects

// in the oops concept we creae the class and the objects 
// so basically we reate the class and then we make the objects out of the class 
// class is basically is a template and with the template we can create the objects so that we need not to make the each again and again variable 
// with the obejcts we make the real world enetity and we use the dot operator to make them from the class 


// class is basically a template and without the object instantiation no mwmory is not  allocated to the class
// so after the class we need to make the object so that we can use the template of the class
// class bascilly contains the variable knows as attributes and functions knowns as methods in it and we can access them by using the dot operator with the object making 
// so in the class we make the variable and th emethods in it 

// so when the object is created then it inherited all the variables and the methods of the class in it and can acces it by using th edo toperator 
// we can make as many as the object with a single class and can change the value also 


myclass myobj;
myobj.name="pranjal jain";
myobj.num=20;
// object is been created and now we can access it and the memory is been given to the class 
cout<<"the name is "<<myobj.name<<" and the age is "<<myobj.num<<"\n";


// we can make as many as the object from a single class 
// myclass myobj2;  //declare the 2nd object from the same class
// string name=myobj2.name="pj";
// cout<<"then name has been changed to : "<<name<<"\n";

// so in this way we create the real world entities 

// moreover we can also add fucntion in the class defination 
// there are 2 ways through which we can add the fucntion inside or outside the class 


myclass2 myobj2;
myobj2.myfun("pranjal jain ");

// so in this way we use the function inside the class 
// so the class methods can be declare both inside and outside the function 
// so make the class and make the function inside the function 


// if we want to dfine the function outisde the class the first we had to declare it into the class and then we can use the :: for outisde define 
// declare it inside thefun so that we can access it by the dot operator 


































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






































































