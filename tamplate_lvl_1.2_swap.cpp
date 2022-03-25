#include <iostream>
#include <cstring>
template<typename T>
void swap(T &x, T &y) {
  T temp(x);
  x = y;
  y = temp;
}

struct student {
  std::string name;
  std::string id_number_string;
};

int main() {
  //________________свап целых____________________
  int i_a = 1;
  int i_b = 2;
  std::cout << i_a << " " << i_b << "  <==>  ";
  swap<int>(i_a, i_b);
  std::cout << i_a << " " << i_b << '\n';
  //_________________свап десятичных___________________
  double d_a = 1.1;
  double d_b = 2.2;
  std::cout << d_a << " " << d_b << "  <==>  ";
  swap<double>(d_a, d_b);
  std::cout << d_a << " " << d_b << '\n';
  //__________________свап чаров__________________
  char c_a[] = "abc";
  char c_b[] = "xyz";
  std::cout << c_a << " " << c_b << "  <==>  ";
  swap<char>(*c_a, *c_b); //нужна *
  std::cout << c_a << " " << c_b << '\n';

  return 0;
}
