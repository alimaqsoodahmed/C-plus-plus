#include<iostream>
using namespace std;

int main(){

 int fish  = 5;
 cout<<&fish<<endl;
 int *fishpointer;
 fishpointer = &fish;  //pointer

 cout<<fishpointer<< endl;
 cout<<&fishpointer;

}
