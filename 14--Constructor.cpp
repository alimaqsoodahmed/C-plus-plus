#include<iostream>
#include<string>
using namespace std;

class BuckyClass{
public:
     BuckyClass(string z){
            setname(z);
            //cout<<"THSI WILL PRINT AUTOMATICALLY : \n\n";
            //same as class name(thtat how c++ know  function name  as class name has no return type +
            // call  automticatlly when object is created.

     }
    void setname(string x)
    {
        name = x;
    }
    string getname(){

    return name;
    }

    private:
    string name;
};
int main() {


    BuckyClass bo("Lucky BUcky robert\n\n ");
    cout<<bo.getname();

    BuckyClass bo2("saly made sald\n\n");
    cout<<bo2.getname();

    BuckyClass bo3("saly mhgfh hnfgh sald\n\n");
    cout<<bo3.getname();
return 0;


}
