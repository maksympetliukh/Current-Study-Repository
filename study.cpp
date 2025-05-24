#include <iostream>

using std::cout;
using std::cin;
using std::hex;
using std:: endl;
using std::boolalpha;

int main(){
    int a {10};
    int b {4};

    if((a + b) < 15){
        cout << "Statement is true" << endl;
    }else{
        cout << "Statement is false" << endl;
    }

    return 0;
}