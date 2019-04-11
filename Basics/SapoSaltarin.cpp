#include <iostream>

using namespace std;

int main()
{
  int saltos, distancia, contador;
  
  cout << "Ingrese la distancia a recorrer: ";
  cin >> distancia;
  
  if(distancia > 0){
    distancia -= 1;
    saltos += 1;
    
    contador = 1;
    
    while(distancia > 0){
        if(distancia >= 9){
            distancia -= contador * 9;
            saltos += 1;
        }else{
            distancia = 0;
            saltos += 1;
        }
        contador += 1;
    }
    
    cout << "La cantidad de saltos necesarios es: " << saltos;
  }
}
