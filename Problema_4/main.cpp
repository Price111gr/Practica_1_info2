#include <iostream>

#include <cmath>

using namespace std;

// Ingresar dos numeros para ver si sumados pueden dar una hora mas adelantada //

int main()

{
    int hora1, hora2, min1, min2 , ht, mt;
    bool B;


    cout<<"Ingresa una la primera hora: ";
    cin>>hora1;

    cout<<"Ingresa una la segunda hora: ";
    cin>>hora2;

    B=true;

    while(B!=false){

        min1 = hora1%100;
        hora1 = hora1/100;
        min2 = hora2%100;
        hora2 = hora2/100;
        B=false;
    }

    ht=hora1+hora2;

    mt=min1+min2;

    if(ht>24){

        B=true;
        while(B!=false){
           cout<<"reingresa los datos de la hora y minutos, te pasaste del dia "<<ht<<" "<<endl;
           cout<<"Ingresa la primera hora: ";
           cin>>hora1;

           cout<<"Ingresa la segunda hora: ";
           cin>>hora2;

           min1 = hora1%100;
           hora1 = hora1/100;
           min2 = hora2%100;
           hora2 = hora2/100;

           ht=hora1+hora2;

           mt=min1+min2;

           if(ht<24){
               break;
           }
        }

    }
    else if(mt>60){
        ht+=1;
        mt-=60;
        if(ht>24){
            cout<<"reingresa los datos, te pasaste del día"<<ht<<mt;
        }
        else{
            cout<<"La hora es: "<<ht<<mt;
        }
    }

    return 0;
}
