#include <iostream>
#include "estudiante.h"
using namespace std;

int main() {
  std::string name1;
  std::string name2;
  int age1;
  int age2;

  std::cout<<"Ingresar nombre"<<endl;
  std::cin>>name1;
  cout<<"Ingresar edad"<<endl;
  cin>>age1;
  student estudiante1(name1,age1);

  
  
  std::cout<<"Ingresar nombre del segundo estudiante"<<endl;
  std::cin>>name2;
  cout<<"Ingresar edad del segundo estudiante"<<endl;
  cin>>age2;
  student estudiante2(name2,age2);

  if (estudiante1.isolder()){
    cout<<"El estudiante 1 "<<estudiante1.getname()<<" es mayor de edad"<<endl;
  }
  if (estudiante2.isolder()){
    cout<<"El estudiante 2 "<<estudiante2.getname()<<" es mayor de edad"<<endl;
  }
  
}