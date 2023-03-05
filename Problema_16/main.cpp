#include <iostream>

using namespace std;

int main()
{
    int n, k, terminos=0, maxter=0, i1;

    cout<<"ingrese numero limite de semilla: ";
    cin>>k;


    for (int i=1; i<=k; i++){
        n=i;
        terminos=1;
        cout<<n<<": "<<n<<" ";

        while (n!=1){
            if (n%2==0){
                n=n/2;
                terminos++;
                cout<<n<<" ";
            }

            else {
                n=3*n+1;
                terminos++;
                cout<<n<<" ";
            }
        }

        if (terminos>maxter){
            maxter=terminos;
            i1=i;
        }

        cout<<endl;

    }

    cout<<"La serie mas larga es con la semilla: "<<i1<<" y tiene "<<maxter<<" terminos"<<endl;
    return 0;
}
