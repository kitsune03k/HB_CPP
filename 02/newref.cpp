#include <iostream>

using namespace std;

int main(void){
    int * number = new int;
    *number = 1;

    cout << "by pointer : " << * number << endl;
    cout << "address : " << number << endl;

    int & ref = *number;
    cout << "by reference : " << ref << endl;
    cout << "address : " << &ref << endl;

}