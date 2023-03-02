#include <iostream>

using namespace std;

int main()
{

    int num=0, cont=0, base=2, primo=0;
    cout << "Ingrese un numero: ";

    cin>>num;

    while(cont<num){

        for(int i=2; i<=base; i++){

            if(i!=base && base%i==0){
                break;
            }

            else if(i==base){
                primo=base;
                cont++;

            }

        }
        base++;
    }

    cout<<"EL numero primo en la poscision "<<num<<" Es: "<<primo<<endl;


    return 0;
}
