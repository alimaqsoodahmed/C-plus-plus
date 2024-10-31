#include<iostream>

using namespace std;

int volume(int l =7 ,int w=10, int h=1);

int main()
{
    cout<<volume(4,5,8);  //valu e over riding if any miss c++ caught it frm abvoe

}

int volume (int l, int w,int h){

  return l*w*h;
}
