#include<iostream>
using namespace std;
int main()
{
  int age=45;
  int agetotal =0;
  int numberofpoepleentered =0 ;

  cout<<" Enter First person age or -1 to quit\n";
  cin>>age;

  while(age != -1)  //when condition true loop termminate....
  {
      agetotal = agetotal + age;
      numberofpoepleentered++;

      cout<<"Enter the next  persons age  or -1 to quit\n";
      cin>>age;
  }

  cout<<"Number of  poeple eneted: "<<numberofpoepleentered<<endl;
  cout<<"Average age : "  <<agetotal/numberofpoepleentered;

return 0;
}
