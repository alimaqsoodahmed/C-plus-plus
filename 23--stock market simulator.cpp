#include<iostream>
#include<cmath>
using namespace std;
int main()
{

  float a;
  float p =10000; //how  much invest----principal amount
  float r =.01; //intereste rate  per day =1%

  for(int day=1; day<=20; day++){

    a = p*pow(1+r, day);  //formula for interest rate
    cout<<day<<"--------"<<a<<endl;
  }


}
