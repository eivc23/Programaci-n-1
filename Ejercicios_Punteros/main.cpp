#include <iostream>

int main(){
    int a;
    int * b = &a;

    a = 4;

    *b = 6;
    std:: cout<<a<< std::endl;
    return 0;
}