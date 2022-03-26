#include <iostream>

template<typename T>
bool operator==(T const &x, T const &y) {
  return x == y;
}

template<typename T>
bool operator>=(T const &x, T const &y) {
  return x >= y;
}
template<typename T>
bool operator<=(T const &x, T const &y) {
  return x <= y;
}

int main() {
  system("chcp 65001"); // для отображения русского в CLion
  int i_a = 1, i_b = 2;
  double d_a = 1.1, d_b = 2.2;
  float f_a = 1, f_b = 2.2;
  char c_a[] = "abc", c_b[] = "xyz";
  std::cout << "Сравнение int   " << i_a << " == " << i_b << "  is:  " << (i_a == i_b) << '\n';
  std::cout << "Сравнение int   " << i_a << " >= " << i_b << "  is:  " << (i_a >= i_b) << '\n';
  std::cout << "Сравнение int   " << i_a << " <= " << i_b << "  is:  " << (i_a <= i_b) << '\n' << '\n';

  std::cout << "Сравнение double   " << d_a << " == " << d_b << "  is:  " << (d_a == d_b) << '\n';
  std::cout << "Сравнение double   " << d_a << " >= " << d_b << "  is:  " << (d_a >= d_b) << '\n';
  std::cout << "Сравнение double   " << d_a << " <= " << d_b << "  is:  " << (d_a <= d_b) << '\n' << '\n';

  std::cout << "Сравнение float   " << f_a << " == " << f_b << "  is:  " << (f_a == f_b) << '\n';
  std::cout << "Сравнение float   " << f_a << " >= " << f_b << "  is:  " << (f_a >= f_b) << '\n';
  std::cout << "Сравнение float   " << f_a << " <= " << f_b << "  is:  " << (f_a <= f_b) << '\n' << '\n';
  
  std::cout << "Сравнение char   " << c_a << " == " << c_b << "  is:  " << (*c_a == *c_b) << '\n';
  std::cout << "Сравнение char   " << c_a << " >= " << c_b << "  is:  " << (*c_a >= *c_b) << '\n';
  std::cout << "Сравнение char   " << c_a << " <= " << c_b << "  is:  " << (*c_a <= *c_b) << '\n';
  return 0;
}