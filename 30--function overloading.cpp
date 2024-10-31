#include<iostream>

using namespace std;

void printNumber(int x)
{

    cout<<"i am printing integer\n"<<x<<endl;
}

void printNumber(float x)
{


    cout<<"i amprinting float\n\n"<<x<<endl;
}



int main()
{

  int a =545;
  float b =32.45;

  printNumber(a);
  printNumber(b);

}

