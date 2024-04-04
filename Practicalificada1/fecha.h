#include <iostream>
using namespace std;

class date{
  public:
    explicit date(int d, int m, int y):dia{d}, mes{m}, ano{y}{
        if(m >= 1 && m <= 12)
          mes = m;

        if( 1900 <= y && y<=2050  )
          ano = y;
    }
    void setday(int d){
      dia = d;
    }
    void setmonth(int m){
      if(mes>=1 && mes<=12){
        mes = m;
        }      
    }

    void setyear(int y){
      if( 1900 <= y && y<=2050  )
        ano = y;
    }

    int getday() const {
      return dia;
    }
    int getmonth() const{
      return mes; 
    }
    int getyear()const {
      return ano;
    }

    void displaydate()const {
      std::cout<<dia<<" / "<<mes<<" / "<<ano<<endl;
    }

    bool esbisiestoyear() const{
      return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
    }

  private:
    int dia;
    int ano;
    int mes{1};
};
