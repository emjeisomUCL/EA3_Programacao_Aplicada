//Criação de biblioteca externa
#include <math.h>
#include <iostream>

#define REDB "\e[41m"
#define NC "\e[0m"

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
    void verificaLeitura(char op){

      cout<<"\n\nOperacao: ";

      if(op != '|'){

        if(pImaginario01 >= 0){
          cout<<"\n ("<< pReal01 << " + " << pImaginario01 << "j)";
        }else{
          cout<<"\n ("<< pReal01 << " - " << pImaginario01 << "j)";
        }

        cout<<" "<<op <<" ";

        if(pImaginario01 >= 0){
          cout<<"("<< pReal02 << " + " << pImaginario02 << "j) = ";
        }else{
          cout<<"("<< pReal02 << " - " << pImaginario02 << "j) = \n\n";
        }

      }else{

        if(pImaginario01 >= 0){
          cout<<"\n |"<< pReal01 << " + " << pImaginario01 << "j| = ";
        }else{
          cout<<"\n |"<< pReal01 << " - " << pImaginario01 << "j| = ";
        }

      }
    }

    //Operacao de ADICAO
    void Adicao(){
      double adicaoR = pReal01 + pReal02;
      double adicaoI = pImaginario01 + pImaginario02;

      if((pImaginario01 + pImaginario02) >= 0){
        cout <<adicaoR << " + " << adicaoI << "j";
      }else{
        cout <<adicaoR << " - " << adicaoI*-1 << "j";
      }
    }

    //Operacao de Subtracao
    void Subtracao(){
      double subtracaoR = pReal01 + pReal02;
      double subtracaoI = pImaginario01 + pImaginario02;

      if((pImaginario01 + pImaginario02) >= 0){
        cout <<subtracaoR << " + " << subtracaoI << "j";
      }else{
        cout <<subtracaoR << " - " << subtracaoI*-1 << "j";
      }
    }

    // Operacao de Multiplicacao
    // Para operações de Multiplicacao e Divisao foi usado como referencia o material do site https://www.todamateria.com.br/numeros-complexos/
    void Multiplicacao(){
      double multR = pReal01 * pReal02 - pImaginario01 * pImaginario02;
      double multI = pReal01 * pImaginario02 + pImaginario01 * pReal02;

      if((pReal01 * pImaginario02 + pImaginario01 * pReal02) >= 0){
        cout <<multR << " + " << multI << "j";
      }else{
        cout << multR << " - " << multI*-1 << "j";
      }
    }

    //Operacao de Divisao
    // Para operações de Multiplicacao e Divisao foi usado como referencia o material do site https://www.todamateria.com.br/numeros-complexos/
    void Divisao(){

      if(pReal02 == 0 && pImaginario02 == 0){
        cout<< REDB <<"\n IMPOSSIVEL DIVIDIR POR ZERO! " << NC;
      }else{

        double DivR = (pReal01 * pReal02 + pImaginario01 * pImaginario02) / (pow(pReal02,2) + pow(pImaginario02,2));
        double DivI = (pReal02 * pImaginario01 - pImaginario02 * pReal01) / (pow(pReal02,2) + pow(pImaginario02,2));

        if((pReal01 * pImaginario02 + pImaginario01 * pReal02) >= 0){
          cout <<DivR << " + " << DivI << "j";
        }else{
          cout <<DivR << " - " << DivI* -1 << "j";
        }

      }
    }
    
    //Operacao Modulo
    void Modulo(){
      double cModulo = sqrt( pow(pReal01,2) + pow(pImaginario01,2));
      double cAngu = atan(pImaginario01 / pReal01) * 180 / 3.14159265;
      cout <<cModulo << " < " << cAngu * -1 << " Graus";
    }
  };
}