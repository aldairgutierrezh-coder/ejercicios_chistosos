#include <iostream>
using namespace std;
int main(){
    int array[3][5];
    int segundo_numero[3];
    int numero_1,numero_2;
    cout<<"porfavor coloque los 2 numeros "<<endl;
    cin>>numero_1>>numero_2;
    int a,suma_binaria,digito;
    a=numero_2;
    for ( int l=0; l<3; l++){
        digito=(a%10);
        segundo_numero[l]=digito;
        a=(int)(a/10);
    }int c=1;
    for(int f=0;f<3;f++){
        suma_binaria=numero_1*segundo_numero[f]*c;
        for(int u=0;u<5;u++){
            array[f][u]=suma_binaria%10;
            suma_binaria=(int)(suma_binaria/10);
        } c*=10;
    }int suma=0;int numero_final=0;int z=1;
for(int r=0;r<5;r++){
    for (int w=0;w<3;w++){
        suma+=array[w][r];
        if (w==2) {
            if (suma==0){suma=0;}
            else if (suma==1) {
                numero_final+=1*z;suma=0;}
            else if (suma==2) { if (r==4){numero_final+=10*z;break;}
                numero_final+=0*z;suma=1;
            }
            else if (suma==3) {
                if (r==4){numero_final+=11*z;break;}
                numero_final+=1*z;suma=1;
            }
        }
    } z*=10;
}
cout<<"el producto binario es:   "<<numero_final<<endl;
return 0;}

// Created by Asus on 31/08/2025.
//