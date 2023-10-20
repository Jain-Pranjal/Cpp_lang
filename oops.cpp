// create the function declaration here
// so basically create the fucntion just before the main statement in here 

// class is made above the main and we create the object inisde the main 


// for file working 
#include<fstream>
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



class outfun{
    public:
        void age (int age, string name );
        // declare the function inside the class and provide the defination outside the class 
};

// as we have declared the function inside the class we can define the functiion here 

// the class datatype must be same as the datatype of the function defination so that we can relate them same 
void outfun::age(int age, string name){
    cout<<"your age is "<<age<<" and the name is : "<<name<<"\n";
}


// making of the construcutor 
class car{
    public:
        string brand;
        string modal ;
        int year;
        // construcutor has the same name as the class name and it does ot have an return type and it is alwyas be in the public 
        car(string x, string y , int z){
            brand=x;
            modal=y;
            year=z;
            
        }

        void fun1();
        // only the decalration of the function 
};


// same type of the function must have same type of the class aslo 
void car:: fun1(){
    int age;
    cout<<"Enter the present age : ";
    cin>>age;
    cout<<"after 5 years age will be "<<age+5<<"\n";
    cout<<"this is the function outside the class";
}



class demo{
    int age;
    int salary;
};


// inheritence 
// this is the main class 
class vechilce{
    public:
        string brand="Ford" ; //attribiute in the parent class
        void honk(){
            cout<<"this is honk\n"; //fun in the parent class
        }

    private:
        int age;
};

// so to inherited the property the parent class in the child class 

class gaddi : public vechilce{
    // now all the attributes and th emethods of the main class is also accessible from where 
    public:
        string modal="modal c class";
};

class scooter : public gaddi{
    // this is the multilevel inheritence 
    public :
        string type="road vechicle ";
};






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
myobj2.myfun("pranjal jain \n");

// so in this way we use the function inside the class 
// so the class methods can be declare both inside and outside the function 
// so make the class and make the function inside the function 


// if we want to dfine the function outisde the class the first we had to declare it into the class and then we can use the :: for outisde define 
// declare it inside thefun so that we can access it by the dot operator 


// now we can also use the construcutor that is a special type of method which runs itself on the time of the object creation 
// we can badically use the construcutor to pass the value at the time of the object creation only .




// CONSTRUCUTOR HAS THE SAME NAME AS THE CLASS NAME 
// construcutor always havve the same name as the class name and it does not have any return value and it is always public 

car objconst("bmw","c class",5);
// here the const takes the value and store in the varibale 
// so just by making the object the construcutor is already called and do the thing that is define in it .
// constructor is the function so we need to use the ()
cout<<objconst.brand<<"\n";

// construcutor is also a funciton so we can drfine it outisde the class also 
// for defining it outisde the class we need to use the scope resolution operator in it 

// objconst.fun1();

// we have by default private members in the class


// accessng a private member of a class
demo mydemo;
// mydemo.age=66;
// this is inaccesaable as we cannot acces the private members



// Working with the files
// use the f stream lib 

//fstream can be used for both read , wriite and create of the fiel 


// fstream can do both the write read and crete the file so it is a combination of them 

fstream Myfile("sample.txt");
Myfile<<"hello this is a sample file in c++\n hemlo sabhi kpo ";
Myfile.close();

// for the string we use the get line function to take the string 
// getline() is sed to read the lienof text


/*

string sample;
cout<<"enter the name : ";
// it terminates the white space charater 
// thats why we use the getline() function 
// cin>>sample;
getline(cin,sample);
// cin takes the input ans store inside the sample variable 
// getline finction is used for the same for reading the text line by line 

cout<<sample;

*/

// reading from a file 
string text;
fstream f ("sample.txt");
//  f is the alias of the file name 
while(getline(f,text));
cout<<text;
f.close();


// Inheritence
// so basiclly we make the class from the baseclass or the parent class 
gaddi car;  //object maing 
cout<<"\n"<<car.brand<<"\n";
// accesisg the fun
car.honk();
 
//  in the multilevel inheritence we can iherit from the previous calss and use the attributes and the functions from the main class also 



scooter sc;
sc.honk();
// so bascilly we are extracting from the first class 











































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







































































