#include <iostream>
#include <cstring>

template<typename T>
T searchMax(const T *array, int size) {
  T max = array[0]; // максимальное значение в массиве
  for (int ix = 0; ix < size; ix++)
    if (max < array[ix])
      max = array[ix];
  return max;
}
int main() {
  system("chcp 65001"); // для отображения русского в CLion
  char array[] = "aodsiafgerkeio";
  int len = strlen(array);
  std::cout << "Максимальный элемент массива типа char: " << searchMax(array, len) << '\n';

  int iArray[5] = {3, 5, 7, 2, 9};
  std::cout << "Максимальный элемент массива типа int: " << searchMax(iArray, 5) << '\n';

  double dArray[8] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
  std::cout << "Максимальный элемент массива типа double: " << searchMax(dArray, 8) << '\n';

  return 0;
}