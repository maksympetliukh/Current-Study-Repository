#include <iostream>

using std::cout;
using std::cin;
using std::hex;
using std:: endl;
using std::boolalpha;

int main(){
    int a, b;

    cout <<"Please, enter a: ";
    cin >> a;
    cout << "Please, enter b: ";
    cin >> b;

    if(a > b){
        cout << "a is greater than b" << endl;
    }
    else if(a == b){
        cout << "a is equal to b" << endl;
    }else{
        cout << "a is less than b";
    }
    
    return 0;
}