#include <iostream>

void Modificarvalor(int *p){
    *p = 9;

}
int main (){
    int c = 7;
    Modificarvalor(&c);



    std::cout<< c << std:: endl;

    return 0;
}