//Criação de biblioteca externa
#include <math.h>

using namespace std;

// Fiz o uso de namespace pois esta em um exemplo na documentação da Microsoft 
// (https://docs.microsoft.com/pt-br/cpp/build/walkthrough-creating-and-using-a-static-library-cpp?view=msvc-160) 
// mas usei como exemplo somente até essa porque lá esta sendo implementado classes e aqui vamos implementar struct

namespace numComplex{
  //Criação da struct com os seus atributos, ou seja, os dois numeros complexos que serão usados nas operações
  struct tComplexos{
    double pReal01;
    double pImaginario01;
    double pReal02;
    double pImaginario02;

    // Criado função para preencher os atributos de tComplexos
    void enterNumber(double rNum1, double iNum1, double rNum2, double iNum2){
      pReal01 = rNum1;
      pImaginario01 = iNum1;
      pReal02 = rNum2;
      pImaginario02 = iNum2;
    }

    //Verifica se leitura esta sendo feita
    void verificaLeitura(){
      cout<<"\nNum Real01......: " <<pReal01<<endl;
      cout<<"Num Imaginario01: " <<pImaginario01 <<endl;
      cout<<"Num Real02......: " <<pReal02<<endl;
      cout<<"Num Imaginario02: " <<pImaginario02<<endl;
    }


  };
}