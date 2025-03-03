// #include <iostream>
// using namespace std;

// int func(int n) {
//   int i = 0;
//   while (n != 1) {
//     if (n % 2 == 0) {
//       n = n / 2;
//       i++;
//     } else {
//       n = 3 * n + 1;
//       i++;
//     }
//   }
//   return i;
// }

// int main() {
//   int n;

//   cin >> n;
//   cout << func(n);
// }

#include <cstring>
#include <iostream>
using namespace std;

int PowerInt(int x) { return x * x; }

float PowerFloat(float x) { return x * x; }

char *PowerChar(char *x) {
  int len = strlen(x);

  // Новый массив для результата
  char *doubledStr =
      new char[len * 2 +
               1]; // Умножаем длину на 2, плюс 1 для символа завершения строки

  int j = 0;
  // Дублируем каждый символ
  for (int i = 0; i < len; ++i) {
    doubledStr[j++] = x[i]; // Копируем символ
    doubledStr[j++] = x[i]; // Копируем тот же символ еще раз
  }
  return doubledStr;
}

int main() {
  char x[] = "123";
  cout << PowerChar(x);
}