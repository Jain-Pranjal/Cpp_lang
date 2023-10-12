#include<iostream>
#include<string>
using namespace std;
int main(){
// so we will learn about strucutre 
// srrucuture basically creates the strucutre of all the variable inside it of diff datatype 

// the elements if the strucutre are called the menbers and we can acccss them using the . operator 
// basically srtrucuture is like the template and we can create as many varibale using  the built in strucure
// if we declare the name of the structure then we can use it as a datatype also

// so we can combine diff variabel of diif datatype into one place so that we only need a same name 
struct{
    int age;
    string name;
}p1;
// p1 is the name of the vacriable that has been using the the strucutre format 
// in this way we can access the member of thestrucutre and can create as many as variable of the structure 

p1.age=55;
p1.name="pranjal jain";
cout<<p1.age<<"\n"<<p1.name<<"\n";

// so basically cin string treartes the white spaces as the terminator 
// thats why we should use the getlines() function instead of cin which takes the cin and the variable_name as the parameter

// string hemlo;

// cout<<"Enter the name : ";
// getline(cin,hemlo);
// cout<<"name is : "<<hemlo;


// getline will replace the cin function and will print the full string 


// struct{
//     // decrre as many as diff variabel of diff datatype 
// }structure variable name

// we can access this by using the . operator


// if we define the name of the strucuture then we can use it as a dataype also for creating the new variable 
struct car{
    string modal;
    int year;
    string name;
};

// now i can use this strucutire a as datatype 
// car1 is the variable name ass we have make a named strucutre now access the named str using the datatype on the variable name 
car car1;
car1.modal="audi";
car1.name="pranjal";
car1.year=2032;
cout<<"all the details are : "<<car1.modal <<"\t"<<car1.name<<"\t"<<car1.year<<"\n";


// the extensive use is by makin git datatype and byv thatt means w have to give the name of the strcuture


// References 
// pointer is just like the another variable that store the address of the memory of other varible in it 
// we can make the pointet using the * operator 
// if we print the pointer then we get the adress 
// but if we print the *ptr then we get the value of what the variable contains in it 



// th e& operator is used for refernce variable as well as to store the address of the variable in it 
int level=55;
cout<<&level<<"\n";
// so & tells the address of the variable so that how we can use the pointer in it 
// we can get the memory addressof any variable using the & operator 
// so if we want tot store the address we need some variable and that some variable is called pointer 


// same type of pointer will store the same type of adress of thr variable 
// int *ptr=&level;
// cout<<ptr<<"\n";
// cout<<*ptr<<"\n";
// so if we print the *ptr then it will print the value of the variable that it id 


// for storing the address we have to use the & operator in it 
string food="pizza";
string *ptr=&food;
// pointer store the address of the other variable in it 
cout<<food<<"\n";
cout<<ptr<<"\n"; //ptr contains the address of the food varible in it 
cout<<*ptr<<"\n"; // so it will give the value of the variable direct 


// to get the address of an variable use the & 
// and to store that adress use the piointer 

// remener that we can change the value of the poiner then it will change the value of the original also 


*ptr="ghar ka khana";
cout<<*ptr<<"\n";
cout<<food;
// so basically by changing the pointer it also cahnges the actual value of the variable as it is linked to it only 

// so we can chnage the value not the addrress of the variable 
// so for changing the value we should use the *ptr in it 




















































    return 0;
}
    
