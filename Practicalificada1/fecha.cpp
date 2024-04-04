#include <iostream>
#include "fecha.h"
using namespace std;

int main(){
  date fecha1(3,1,2020);
  date fecha2(15,14,2019);
  date fecha3(20,12,1500);

  fecha1.displaydate();
  fecha2.displaydate();
  fecha3.displaydate();

  
}