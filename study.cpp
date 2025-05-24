#include <iostream>

using std::cout;
using std::cin;
using std::hex;
using std:: endl;
using std::boolalpha;

int main(){
    int a {5};
    int b {3};

    if(int rem{a % b}; rem ==0){
        cout << "a divisible by b" << endl;
    }else{
        cout << "remaining of a/b = " << rem << endl;
    }

    return 0;
}