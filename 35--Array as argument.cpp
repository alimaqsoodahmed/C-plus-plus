//35 tutorial
#include<iostream>
using namespace std;

void printArray(int theArray[] , int sizeofarray );

int main(){

   int bucky[3] = { 20, 54, 675};
   int jessica[6] = { 54,24,7,8,9,99};

   printArray ( jessica , 6);
cout<<" \n ";
  printArray ( bucky , 3);
}
void printArray(int theArray[] , int sizeofarray){

 for(int x= 0; x<sizeofarray ; x++){

  cout<< theArray[x] <<endl;
 }
}





