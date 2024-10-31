#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{

   Sally sallyObject;
  Sally *sallypointer  = &sallyObject; //acces using object

   sallyObject.printcrap();
   sallypointer->printcrap();  //arrow member selection operator accessing using pointer

    return 0;
}
