#include <iostream>
using namespace std;

class student{
  public:
    explicit student(std::string n, int a):name{n}, age{a} {}

    std::string getname() const {return name;}
    int getage() const {return age;}  

    void setname(const std::string newname) {name =newname; }
    void setage(const int newage) {age =newage; }

    bool isolder() const {
      return age >= 18;
    }

  private:
    std::string name;
    int age;
};