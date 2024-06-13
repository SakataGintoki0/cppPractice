#include <iostream>
#include <string>
#include "sum.h"
#include "myclass.h"

using namespace std;

int main(){
    MyClass myObj(15, "lol");
    cout << myObj.myNum << " " << myObj.myString << endl;
    myObj.myMethod(); 
    return 0;
}
