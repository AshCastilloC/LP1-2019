#include <iostream>
#include <string>

using namespace std;

int main()
{
  int saltos, distancia;
  
  cout << "Ingrese la distancia a recorrer: ";
  cin >> distancia;
  
  distancia -= 1;
  saltos += 1;
  
  while(distancia > 0){
    if(distancia - 9 >= 9)
    {
        distancia -= 9;
        saltos += 1;
    }else{
        saltos += 1;
        distancia = 0;
    }
  }
  
  cout << "La cantidad de saltos necesarios es: " << saltos;
}
