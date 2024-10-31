//27 tutorial
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

    srand(time(0));      //allow computer accees to time(0)  claculte no of second

for(int x=1; x<25 ; x++){


        cout<<x<<"   ";
        cout<<1+(rand()%6)<<endl;  //no computer random no generator is true random
                            //computer are not human they follow algorithm + pattern
}
}
