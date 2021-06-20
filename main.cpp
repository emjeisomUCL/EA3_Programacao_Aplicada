// O aluno deverá criar uma biblioteca para trabalhar com numeros complexos. 
// Ela deverá ser composta por uma estrutura, a qual será dado o nome de tComplexos, 
// que tera a forma de um numero complexo (parte real e parte imaginária).
// A sua biblioteca deverá ter funções que executamas seguintes operações: 
// soma, subtração, multiplicação, divisçao e modulo dos numeros complexos.
#include <iostream>
#include "tComplexos.h"

#define RED "\e[0;31m"

using namespace std;
using namespace numComplex;


int main()
{
  
  tComplexos calc;
  double nReal01 = 0, nImag01 = 0, nReal02 = 0, nImag02 = 0;
  char op = ' ';

  // Menu de operacao. 
  cout<< "Informe o caractere da operação que deseja realizar ou digite (s) para sair...." <<endl;
  cout<< "\t + p/ Adicao" <<endl;
  cout<< "\t - p/ Subtracao" <<endl;
  cout<< "\t * p/ Multiplicacao" <<endl;
  cout<< "\t / p/ Divisao" <<endl;
  cout<< "\t | p/ Modulo" <<endl;
  cout<< "\t Operacao: ";
  cin>>op;

  //Operaçoes iram ocorrer quantas vezes o usuario quiser, entao sera feito um laco de repeticao
  while(op != 's' && op != 'S'){

    if(op != '|'){
      cout<<"\nComponente real de num01: ";
      cin>>nReal01;
      cout<<"Componente imaginaria de num01: ";
      cin>>nImag01;
      cout<<"Componente real de num02: ";
      cin>>nReal02;
      cout<<"Componente imaginaria de num01: ";
      cin>>nImag02;
    }else{
      cout<<"\nComponente real de num01: ";
      cin>>nReal01;
      cout<<"Componente imaginaria de num01: ";
      cin>>nImag01;
    }

    calc.enterNumber(nReal01, nImag01, nReal02, nImag02);

    calc.verificaLeitura();

    switch(op){
      case '+':
        calc.Adicao();
      break;
      case '-':
        calc.Subtracao();
      break;
      case '*':
        calc.Multiplicacao();
      break;
      case '/':
        calc.Divisao();
      break;
      case '|':
        calc.Divisao();
      break;
      default:
        cout<<"OPCAO INVALIDA";
      break;
    }


    cout<< "\n\nInforme o caractere da operação que deseja realizar ou digite (s) para sair...." <<endl;
    cout<< "\t + p/ Adicao" <<endl;
    cout<< "\t - p/ Subtracao" <<endl;
    cout<< "\t * p/ Multiplicacao" <<endl;
    cout<< "\t / p/ Divisao" <<endl;
    cout<< "\t | p/ Modulo" <<endl;
    cout<< "\t Operacao: ";
    cin>>op;
  }

  cout<< RED <<"\n\nFIM DA OPERACAO";
  cout<<endl<<endl;
  return 0;
}