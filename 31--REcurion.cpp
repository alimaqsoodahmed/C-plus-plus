#include<iostream>

using namespace std;
int factorialfinder(int x){  //function using with in a function

if(x==1)
{
    return -1; //base case  ending point
}else{
return x*factorialfinder(x-1);

}


}


int main()

{


cout<< factorialfinder(5)<<endl;

}
