#include <iostream>

using namespace std;

// ingresar un valor para luego ver en cuantos billetes y monedas se divide y si queda faltando o no //

int main()
{
    int valor;
    int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;

    cout<<"ingresa el valor: ";
    cin>>valor;

    m1= valor/50000;

    if(m1!=0){
        cout<<" billetes de $50000: "<<m1<<endl;
    }
    else{
        cout<<"billetes de $50000: 0"<<endl;
    }

    valor=valor-(m1*50000);

    m2= valor/20000;

    if(m2!=0){
        cout<<" billetes de $20000: "<<m2<<endl;
    }
    else{
        cout<<"billetes de $20000: 0"<<endl;
    }

    valor=valor-(m2*20000);

    m3= valor/10000;

    if(m3!=0){
        cout<<" billetes de $10000: "<<m3<<endl;
    }
    else{
        cout<<"billetes de $10000: 0"<<endl;
    }

    valor=valor-(m3*10000);

    m4= valor/5000;

    if(m4!=0){
        cout<<" billetes de $5000: "<<m4<<endl;
    }
    else{
        cout<<"billetes de $5000: 0"<<endl;
    }

    valor=valor-(m4*5000);

    m5= valor/2000;

    if(m5!=0){
        cout<<" billetes de $2000: "<<m5<<endl;
    }
    else{
        cout<<"billetes de $2000: 0"<<endl;
    }

    valor=valor-(m5*2000);

    m6= valor/1000;

    if(m6!=0){
        cout<<" billetes de $1000: "<<m6<<endl;
    }
    else{
        cout<<"billetes de $1000: 0"<<endl;
    }

    valor=valor-(m6*1000);

    m7= valor/500;

    if(m7!=0){
        cout<<" monedas de $500: "<<m7<<endl;
    }
    else{
        cout<<"monedas de $500: 0"<<endl;
    }

    valor=valor-(m7*500);

    m8= valor/200;

    if(m8!=0){
        cout<<" monedas de $200: "<<m8<<endl;
    }
    else{
        cout<<"monedas de $200: 0"<<endl;
    }

    valor=valor-(m8*200);

    m9= valor/100;

    if(m9!=0){
        cout<<" monedas de $100: "<<m9<<endl;
    }
    else{
        cout<<"monedas de $100: 0"<<endl;
    }

    valor=valor-(m9*100);

    m10= valor/50;

    if(m10!=0){
        cout<<" monedas de $50: "<<m10<<endl;
    }
    else{
        cout<<"monedas de $50: 0"<<endl;
    }

    valor=valor-(m10*50);

    if(valor!=0){
        cout<<"faltan: "<<valor<<" monedas"<<endl;
    }

    return 0;
}
