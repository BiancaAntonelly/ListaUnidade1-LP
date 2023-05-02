#include <iostream>

using namespace std;

int main(){
  string forma_geometrica;
  
  cout << "Digite qual forma geométrica você quer calcular:" << endl;
  cin >> forma_geometrica;
  if(forma_geometrica == "circulo"){
    int raio;
    cout << "Digite o raio do circulo:" << endl;
    cin >> raio;
    int areadocirculo;
    areadocirculo = (3*(raio*raio));
    cout << "A área do circulo de raio " << raio << " é:" << areadocirculo << endl;
  }
    if(forma_geometrica == "quadrado"){
    int lado;
    cout << "Digite o lado do quadrado:" << endl;
    cin >> lado;
    int areadoquadrado;
    areadoquadrado = (lado*lado);
    cout << "A área do quadrado de lado " << lado << " é:" << areadoquadrado << endl;
  }
  if(forma_geometrica == "triangulo"){
    int base;
    int altura;
    cout << "Digite a base do triangulo:" << endl;
    cin >> base;
    cout << "Digite a altura do triangulo:" << endl;
    cin >> altura;
    int areadotriangulo;
    areadotriangulo = ((base*altura)/2);
    cout << "A área do triangulo de base " << base << " e " << altura << "é:" << areadotriangulo << endl;
  }
  
  return 0;
}
