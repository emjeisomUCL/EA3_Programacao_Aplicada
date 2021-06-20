//Criação de biblioteca externa
#include <math.h>

#define CYN "\e[0;36m"

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

    //Operacao de ADICAO
    void Adicao(){
      double adicaoR = pReal01 + pReal02;
      double adicaoI = pImaginario01 + pImaginario02;

      if((pImaginario01 + pImaginario02) >= 0){
        cout <<"\n Adicao = " << adicaoR << " + " << adicaoI << "j";
      }else{
        cout <<"\n Adicao = " << adicaoR << " - " << adicaoI*-1 << "j";
      }
    }

    //Operacao de Subtracao
    void Adicao(){
      double subtracaoR = pReal01 + pReal02;
      double subtracaoI = pImaginario01 + pImaginario02;

      if((pImaginario01 + pImaginario02) >= 0){
        cout <<"\n Subtracao = " << subtracaoR << " + " << subtracaoI << "j";
      }else{
        cout <<"\n Subtracao = " << subtracaoR << " - " << subtracaoI*-1 << "j";
      }
    }

    //Operacao de Multiplicacao
    void Multiplicacao(){
      double multR = pReal01 * pReal02 - pImaginario01 * pImaginario02;
      double multI = pReal01 * pImaginario02 + pImaginario01 * pReal02;

      if((pReal01 * pImaginario02 + pImaginario01 * pReal02) >= 0){
        cout <<"\n Multiplicacao = " << multR << " + " << multI << "j";
      }else{
        cout <<"\n Multiplicacao = " << multR << " - " << multI*-1 << "j";
      }
    }

    //Operacao de Divisao
    void Divisao(){

      if(pReal02 != 0 && pImaginario02 != 0){
        double DivR = (pReal01 * pReal02 + pImaginario01 * pImaginario02) / (pow(pReal02,2) + pow(pImaginario02,2));
        double DivR = (pReal02 * pImaginario01 - pImaginario02 * pReal01) / (pow(pReal02,2) + pow(pImaginario02,2));

        if((pReal01 * pImaginario02 + pImaginario01 * pReal02) >= 0){
          cout <<"\n Divisao = " << multR << " + " << multI << "j";
        }else{
          cout <<"\n Divisao = " << multR << " - " << multI*-1 << "j";
        }
      }else{
        cout<< CYN <<"\n IMPOSSIVEL DIVIDIR POR ZERO! ";
      }
    }

  };
}