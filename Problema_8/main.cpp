#include <iostream>

using namespace std;

//Se ingresan dos numeros para realizar la suma de sus multiplos menores al tercer dato ingresado imprimiendo una secuencia donde se muestre la suma y los datos seguidos de
//su respectivo caracterizador de dato (si es1 dato A si es dos dato B) y seguidos de que posicion es en la secuencia de multiplos

int main ()
{
  int A;
  int B;
  int C;
  int countA=0;
  int countB=0;
  int sum=0;

  cout << "ingresa el numero A: ";
  cin >> A;

  cout << "ingresa el numero B: ";
  cin >> B;

  cout << "ingresa el numero limite: ";
  cin >> C;

  for (int i=1; i<C; i++){
      if (i % A == 0){
        countA+=i;
        sum++;
        cout<<i<<"1"<<sum<<" + ";
      }
    }

    sum=0;

    for (int i=1; i<C; i++){
      if (i % B == 0){
        countB+=i;
        sum++;
        cout<<i<<"2"<<sum;
        if(i+1<=C-B){
          cout<<" + ";
        }
      }

    }

cout<<" = "<<countA+countB<<endl;

  return 0;
}
