#include <iostream>

using namespace std;

int main()
{
    float num, l=1;
    float z=1;
    cout<<"Ingrese numero para aproximar el valor de e: ";
    cin>>num;

    for (float i=1; i<num; i++){

        for (int j=1; j<=i; j++){
            l=l*j;
        }

        cout<<1/l<<endl;
        z=z+1/l;
        l=1;
    }

    cout<<"el valor aproximado de e es: "<<z<<endl;
    return 0;
}
