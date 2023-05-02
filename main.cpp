#include <iostream>
#include "header.hpp" 

using namespace std;

//Acrescentei no seu codigo alguns comentarios e detalhes para te auxiliar...

/*
Para executar esse código você deve digitar no terminal:

g++ -c main.cpp funcoes.cpp

g++ -o nomeEscolhido main.o funcoes.o

./nomeEscolhido figura

note que "nomeEscolhido" é o nome que você escolher para seu programa e a "figura" pode ser circulo, quadrado e triangulo. Essa figura será o argv[1]. 
*/
int main(int argc, char *argv[]){ // Adicionei o argc argv[] para receber as figuras pelo terminal
  
  string forma_geometrica = argv[1]; 
  
/*
Note que você resolveu todos os problemas utilizando if. Você pode trocar esses ifs por funções que resolvem as mesmas coisas. Essas funções devem ser escritas no arquivo funcoes.cpp e prototipadas no arquivo header.hpp (veja os exemplos que coloquei nesses arquivos)

*/
  
  if(forma_geometrica == "circulo"){
    int raio;
    cout << "Digite o raio do circulo:" << endl;
    cin >> raio;
    int areadocirculo = calculaCirculo(raio); // Utilizei uma função calcular a area
    cout << "A área do circulo de raio " << raio << " é:" << areadocirculo << endl;
  }

  //Tente fazer a mesma coisa para as outras figuras geometricas.
  
  if(forma_geometrica == "quadrado"){
    int lado;
    cout << "Digite o lado do quadrado:" << endl;
    cin >> lado;
    int areadoquadrado = calculaQuadrado(lado);
    cout << "A área do quadrado de lado " << lado << " é:" << areadoquadrado << endl;
  }
  
  if(forma_geometrica == "triangulo"){
    int base;
    int altura;
    cout << "Digite a base do triangulo:" << endl;
    cin >> base;
    cout << "Digite a altura do triangulo:" << endl;
    cin >> altura;
    int areadotriangulo = calculaTriangulo(base, altura);
    cout << "A área do triangulo de base " << base << " e de altura " << altura << " é: " << areadotriangulo << endl;
  }
  return 0;
}
