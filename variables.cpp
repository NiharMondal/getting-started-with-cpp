#include <iostream>
#include <string> // included for string data type. check line number 18;
using namespace std;


int main(){

    int num = 10; //10 => 4bytes
    short num1 = 3; //3 => 2bytes
    float floatNumber = 23.02; //23.02 => 4bytes

    double doubleNumber = 12.03; //12.03 => 8bytes
    
    char ch = 'A'; // A => 1bytes
    
    bool isTrue = true; // true or false => 1bytes

    string name = "John Doe";
    cout << name.size() << endl;
    cout << name.length() << endl;
    cout << name.at(9) << endl;
    return 0;
}