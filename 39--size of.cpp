//40 tutorial
#include<iostream>
using namespace std;

int main()
{

    double bucky[1];    //8 x 18  --> double  8 bytes
    cout<<sizeof(bucky)<<endl ;

    cout<<  sizeof(bucky) / sizeof(bucky[17]) <<endl;


}
