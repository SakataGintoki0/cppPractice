#include <string>

using namespace std;

class MyClass {
    public: 
        int myNum;
        string myString;

        MyClass(int num, string str){
            myNum = num;
            myString = str;
            cout << myNum << " " << myString << endl;
        }

        void myMethod(){
            cout << "hello" << endl;
        }
};
       
