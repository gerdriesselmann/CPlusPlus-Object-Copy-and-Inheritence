#include <iostream>

class A {
  public:
  virtual void test() {
    std::cout << "A" << std::endl;
  }
};

class B: public A {
  public:
  virtual void test() {
    std::cout << "B" << std::endl;
  }
};

A getA() { return A(); } 
A getB() { return B(); }

int main() {
  getA().test();
  getB().test();
  return 0;
}
 
