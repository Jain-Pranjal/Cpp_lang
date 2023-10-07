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

// // nested loop 
// for (int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<j<<"\n";
//     }
// }

cout<<"\n";
// array 
// we can make the array using the square brackets in then assing all the elements insdie the curly brakcets
// int myarr[10]={1,2,3,4,5,6,7,8,9,10};
// this is an array
// as the datatype of the array is int so it can store only the integer value in it 
// to traverse the array apply the loop
// for(int i : myarr){
    // cout<<i<<"\n";
// }


// so always remember that while crreating a array only put those elements that we have make an arrya of 
// use the for each loop to iterate inside th array 

// using the simple loop for iterating inside the array 
// for (int i=0;i<10;i++){
//     cout<<myarr[i];
// }

// rememmebr that for taking th estring as an input we use the getline() function in which it act as the input statement contaisnthe cin and the string storeing variable name 




/*

// ARRAY

// the basic diff bw a list and the array is that list contains the heterogeneous type of data whereas array contains the homogeneous type of data
// both the list and the array can be updated as both are mnutable in nature 
// it is same like the list that we used i python but in array we store only the homogenous type of data in it 
// also store that items inside the array which is of the type we make the array 
// making the array of a particluar datatype we need to store that that datatype of items in it only 

// declaring a array 
// int myarr[size of the array]
// string mystringarray[5]  //array declare 
// we can initiate and declare the array both at same time 
string myStringArray[5]={"pranjal","vaishnavi","shreya","sanya","surbhi"};
// cout<<myStringArray;
// to print the array we need to iterate it byh the loop so that we can access every value of the array of it 
// for(int i =0;i<5;i++){
//     cout<<myStringArray[i]<<"\n";
// }

int arr[5];
// so to traverse a array we most frequently use the for each loop 
// Also we can use the foreach loop to iterate the array 
for(string i: myStringArray){
   cout<<i<<"\n";
}
arr[0]=0;
arr[1]=1;
arr[2]=2;
arr[3]=3;
arr[4]=4;

// we can wrrite the elements inside the array at the time of the declareation only or at the next step

cout<<"\nthe second element is :"<<myStringArray[2]<<"\n";

// to access the elements inside the array apply the loop or the for each loop 
// FOR EACH LOOP IS USED EXTENSIVLE IN THE ARRAY LOOPING 
cout<<"\nusing the for each loop\n";
for (string i : myStringArray){
    cout<<i<<"\n";
}
cout<<sizeof(myStringArray);
// so sizeof parameter tells the memory size occupiedd by the string in the memory 

// to find the no of elements inside the array 
cout<<"\nthe total number of elements are : "<<sizeof(myStringArray)/sizeof(string);
// the size taken by the string datatype is 24 bytes

// sizeof() is basiclayy gives the size of the array in the bytes 
// so to find out how many elements are there inside the array then we have to divide the sizeof(array)/sizeof(datatype of the array )

int arraylength=sizeof(myStringArray)/sizeof(string);
cout<<"\n"<<arraylength;

// earlier we write the loop as we know the size 
int integer_array[]={1,51,651,654,145,46,851,31,1,564,156,1,16,456,14,865};
// here we dont know the size of the array
int size_of_array=sizeof(integer_array)/sizeof(int);
cout<<"\nthe total elements inside the array is "<<size_of_array<<"\n";
// now looping through the array 
for (int i =0;i<size_of_array;i++){
    cout<<i<<"\t"<<integer_array[i]<<"\n";
}

// so always remember that to find the total elements inside the array we need to dicedie the sizeof the array by the size of the datatype used in making of the array

// moreover we can loop the array using the foreach loop
// usign the foreach loop 
for (int i: integer_array){
    cout<<i<<"\n";
}

// making of the 2 d array 
int TwoDarray[2][3]={
    {1,2,3},
    {4,5,6}
};

// the number of loops will be same as th dimensions of the array 
for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        cout<<TwoDarray[i][j];
    }
};

// if we want to access the elemtns inside the 2d array then we need to give the both i and j as it is a 2d matrix 
*/







/*
    // STRUCTURES
    // structure basically make the template of the variable along with its datatype that can be stored inside tit 
    struct 
    {
        int age;
        string name;
    }mystruct;

    // all the elements that are defined inside the srtructure are callled the memebers of the structure
    // to access the members of the structure use the . operator
    int structage=mystruct.age=5;
    string names=mystruct.name="pranjal jain kumar singh";
    cout<<structage;
    cout<<names;

    // basically structure contains the basic template of the various variable and fromt that we can make many other variable 
    // structure is like a template that we canb use it for creating a variable
    // if we declare the name of the strucutre then we can use it as the datatype in the program and we can create the variabbke with that datatype

    // making the structure
    struct{
        string name;
        char gender;
        int age;
    }name1,name2,name3;  //these are the strcuture variable 
    // now we had created a general strucutre of the infok just liek we create a class and then we assign them the object same like this 
    // we cna create as many as variable having the same strucutre

    // in this way we have reated a strucuter in which we have given 3 memeber inside the strucuture and we have  3 variable in accesing the same strucutre
    string Name=name1.name="pranjal jain ";
    int Age=name1.age=20;
    char Gender=name1.gender='M';
    cout<<"\nthe name of the student is "<<Name<<"and gender is "<<Gender<<" and age is "<<Age<<"\n";
    cout<<"\nthe name of the student is "<<name1.name<<"and gender is "<<name1.gender<<" and age is "<<name1.age<<"\n";
    // so we can directly print them as thry store the value inside the variable only so no need for assigning them a new variable 
    // there is noo need to store them in separate variable as they aact as the same variable 


    // now we will provide the name to the strucutre so we can treat it as a datatype 
    struct primary{  //here we have given the name to the strucutre now it will act liek a datatype that we can use while creating a variable from it 
        string name;
        char gender;
        int age;
    }myname;

    // as i have created a datatype of the strucutre then i can use it anywhere in he program while making  a variable 

    primary pranjal;
    pranjal.name="jain sahab";
    cout<<pranjal.name;

    cout<<"\n";
    cout<<"making a strucutre with its name so that we can use it as a datatype \n";
    struct mystruct
    {//declaring the members of the strcutre
        string brand;
        string model;
        int year;
    };

    // now mystruct is the datatype that has the following members inside it so we can make variable using it 
    // so we we will use the datatype of thr strucutre

*/




// POINTERS AND REFERENCES



















    return 0;
// as we can see that it only print the inital name as c++ treats the whitespace and tab as the terminator of the line so if we want to take the whole string as the input then we have to use the getline ()

// now we dont require the cin as it will be managed by the getlien function as it takes the parameter of cin and the stringname variable 

}












