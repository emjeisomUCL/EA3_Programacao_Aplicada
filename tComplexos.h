//Criação de biblioteca externa
#include <math.h>

using namespace std;

//Fiz o uso de namespace pois esta em um exemplo na documentação da Microsoft (https://docs.microsoft.com/pt-br/cpp/build/walkthrough-creating-and-using-a-static-library-cpp?view=msvc-160) mas usei como exemplo somente até essa porque lá esta sendo implementado classes e aqui vamos implementar struct

namespace numComplex{
  //Criação da struct com os seus atributos, ou seja, os dois numeros complexos que serão usados nas operações
  struct tComplexos{
    double pReal01;
    double pImaginario01;
    double pReal02;
    double pImaginario02;
  };
}