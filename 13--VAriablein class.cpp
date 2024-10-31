#include<iostream>
#include<string>
using namespace std;
class BuckyClass{
public:
    void setname(string x)    // hopw to access  private variable;
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
 BuckyClass bo;
 bo.setname("OH! I AM ALI \n\n\nf");
 cout<<bo.getname();


return 0;
}
