#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std:: endl;

void load_env(const std::string& filename){
    std::ifstream file(filename);
    if(!file.is_open()){
        std::cerr << "Could not open .env file\n";
        return;
    }

std::string line;
while(std::getline(file, line)){
    line.erase(0, line.find_first_not_of(" \t\r\n"));
    line.erase(line.find_last_not_of(" \t\r\n") + 1 );

    if(line.empty() || line[0] == '#') continue;
    
    size_t pos = line.find('=');
    if(pos == std::string::npos) continue;

    std::string key = line.substr(0, pos);
    std::string value = line.substr(pos + 1);

    std::string env_var = key + '=' + value;


    _putenv(env_var.c_str());
}
}

int main(){
    load_env(".env");

    const char* age = std::getenv("age");

    if(age){
        cout << "My age is " << age << endl;
    }else{
        cout << "Variable is not found in environment." << endl;
    }
    
    return 0;
}