#include"Box.h"
#include<iostream>
using std::cout;
using std::endl;

int main ()
{
    CBox myBox{2.5, 3.0, 2.5};
    cout << "The volume of myBox is: " << myBox.volume() << endl;
    return 0;
}
