#include <iostream>
#include <vector>
using namespace std;

vector<int> numbers;

int s() {
    int suspects = 0;
    for(int i = 0; i < (numbers.size()-1); i++) {
        if(int(numbers[i]) != int(numbers[i+1])) {
            suspects += 2;
        }
    }
    return suspects;
}

int main()
{
    int ns, n;
    int c = 1;
    
    cout << "Ingresa la cantidad de numeros:\t";
    cin >> ns;
    
    while(ns--){
        cout << "Ingrese el numero " << c << " : ";
        cin >> n;
        numbers.push_back(n);
        
        c++;
    }
    
    cout << s();
    return 0;
}
