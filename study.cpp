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

    if(b == 0){
        cout << "Division by zero is undefined" << endl;
    }else{
        int c = a % b;
        if(c == 0){
            cout << "a is divisible by b without reminder" << endl;
        }else{
            cout << "a is divisible by b with reminder " << c << endl;
        }
    }
    
    return 0;
}