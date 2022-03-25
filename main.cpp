#include <iostream>

template<typename T>
void ArrPrint(const T *arr, int size) {
  for (int i = 0; i < size; ++i) std::cout << arr[i] << "   ";
  std::cout << '\n';
}

int main() {
  system("chcp 65001");
  const int i_size = 10, d_size = 7, f_size = 10, c_size = 5;
  int iArray[i_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  double dArray[d_size] = {1.2345, 2.234, 3.57, 4.67876, 5.346, 6.1545, 7.7682};
  float fArray[f_size] = {1.34, 2.37, 3.23, 4.8, 5.879, 6.345, 73.434, 8.82, 9.33, 10.4};
  char cArray[c_size] = "MARS";
  std::cout << "Массив int:  ";
  ArrPrint(iArray, i_size);

  std::cout << "Массив double:  ";
  ArrPrint(dArray, d_size);

  std::cout << "Массив float:  ";
  ArrPrint(fArray, f_size);

  std::cout << "Массив char:  ";
  ArrPrint(cArray, c_size);
  return 0;
}