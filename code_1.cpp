#include<iostream>
using namespace std;

int main(){
// 'cout' use to print the  code and 'endl' or '/n' use to print next line

//cout<<"Namskar bhai ji"<<endl<<"Good Morning"<<"\n"<<"kya haal hai";
int age = 23;

cout<<age<<endl<<sizeof(age)<<"\n";

char alpha = 'A';
cout<<alpha<<endl<<sizeof(alpha)<<endl;
float PI=3.14f;

cout<<PI<<endl<<sizeof(PI)<<endl;

bool isSafe= false;
cout<<isSafe<<endl<<sizeof(isSafe)<<endl;

double price = 100.99;
cout<<price<<endl<<sizeof(price)<<endl;


char grade='b'; //b - 98
// type converssion
int value = grade;

cout<<value<<endl;
//type casting
double rate = 100.99;

int newrate = (int)rate;
cout<<newrate<<endl;

    return 0;
}