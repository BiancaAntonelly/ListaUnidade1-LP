#include <iostream>

float calculaCirculo(float raio){
    int areadocirculo = (3.14*(raio*raio));
    return areadocirculo;
  }
float calculaQuadrado(float lado){
  int areadoquadrado =(lado*lado);
  return areadoquadrado;
}
float calculaTriangulo(float base, float altura){
  int areadotriangulo = ((base*altura)/2);
  return areadotriangulo;
}

//Aqui devem ser inseridas todas as funções que calculam as areas das figuras. A ideia é deixar o arquivo main.cpp apenas com o essencial. 