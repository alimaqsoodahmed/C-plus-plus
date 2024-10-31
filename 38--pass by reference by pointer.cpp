#include<iostream>
using namespace std;

void passbyvalue(int x);
void passbyreference(int *x);

int main(){

int betty  = 13;
              //pass by value->pass copy of that variable not original variable
int sandy =13;
              //pass variable by refernece ->  passing variable address give direct accses to variable
passbyvalue(betty);
passbyreference(&sandy);  //memory address

cout<<"BEtty is now "<<betty <<endl;
cout<<"sandy is now " <<sandy<<endl;
}

void passbyvalue(int x){    //pass a  copy

x = 99;
}

void passbyreference(int  *x){

*x=66;}  //passisng  variable addresss and change value.using astrik.

