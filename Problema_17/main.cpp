#include <iostream>

using namespace std;

int main()
{
    int K,  tri=0,  count=1, countri=0;
    bool B;

    cout<<"Ingresa un numero: ";
    cin>>K;

    B=true;

    while(B!=false){

        tri=count*(count+1)/2;
        cout<<tri<<": ";

        for(int i=1; i<=tri; i++){
            if(tri%i==0){
                countri+=1;
                cout<<i<<", ";
            }
        }
        cout<<endl;
        if(countri>=K){
            cout<<"El numero es: "<<tri<<" que tiene "<<countri<<" divisores";
            B=false;
            break;
        }
        else{
            count++;
            countri=0;

        }
    }

}
