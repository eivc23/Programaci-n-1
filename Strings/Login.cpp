#include <string>
#include<iostream>
using namespace std;
int main(){
    string usuario, endl;
{
        cout<<"su usuario";
        cin>>usuario;
    
}
    string contra;
    do{
        cout<<" su contraseña: \n";cin>>contra;
        if(contra!="12345"){
            cout<<"contraseña incorrecta!! \n";
        }
    }while(contra!="12345");
    cout<<"usted ha accedido a su cuenta";
}
