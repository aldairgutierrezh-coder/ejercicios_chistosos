#include <iostream>
using namespace std;
int main(){
int xd;
int a,b,n;
cout<<"porfavor coloca la cantidad de elementos que va a evaluar"<<endl;
cin>>n;
for(int k=1;k<=n;k++) {
    if(k==1){ cout<<"coloque los numeros"<<endl;
        cin>>a>>b;}else{
            b=xd; cout<<"coloque el otro numero"<<endl;
            cin>>a;
        }
    while(b!=0) {
        xd=b;
        b=a%b;
        a=xd;
    }
}   cout<<"el mcd de los numeros es : "<<xd<<endl;
    return 0;}
// probando hacer un pull a mi repositorio de git hub