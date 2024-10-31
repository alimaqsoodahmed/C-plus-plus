//41 tutorial
#include<iostream>
using namespace std;

int main()
{

    int  bucky[5];
    int *bp0  = &bucky[0];
    int *bp1  = &bucky[1];
    int *bp2  = &bucky[32442];

    cout<<"BP0 is at " <<bp0<<endl;
   cout<<"BP1 is at " <<bp1<<endl;
   cout<<"BP2 is at " <<bp2<<endl;

   bp0  +=  2;
   cout<< " bp0  is now at  "<<bp0 <<endl;

}
