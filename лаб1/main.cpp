// #include <iostream>
// using namespace std;

// int main() {
//   int m, n;
//   cout << "Введите M и N через пробел: ";
//   cin >> m >> n;

//   cout << "Младшая цифра целой части: " << (m / n) % 10 << endl;
//   cout << "Старшая цифра дробной части: " << (m * 10 / n) % 10 << endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cout << "Введите число: ";
//   cin >> x;
//   cout << "Результат: " << (x ^ 15) << endl;
// }

// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//   float x1, x2, x3, y1, y2, y3;
//   cout << "Введите первую точку (x1, y1): ";
//   cin >> x1 >> y1;
//   cout << "Введите вторую точку (x2, y2): ";
//   cin >> x2 >> y2;
//   cout << "Введите третью точку (x3, y3): ";
//   cin >> x3 >> y3;
//   float ab, bc, ac;

//   ab = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
//   bc = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
//   ac = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));

//   cout << "Периметр равен: " << ab + bc + ac << endl;
// }

// #include <cmath>
// #include <iostream>

// using namespace std;

// int main() {
//   float a, b, c;
//   cout << "Введите длины сторон треугольника (a, b, c): ";
//   cin >> a >> b >> c;

//   float angleA = acos((b * b + c * c - a * a) / (2 * b * c));
//   float angleB = acos((a * a + c * c - b * b) / (2 * a * c));
//   float angleC = acos((a * a + b * b - c * c) / (2 * a * b));

//   float angleA_deg = angleA * 180.0 / M_PI;
//   float angleB_deg = angleB * 180.0 / M_PI;
//   float angleC_deg = angleC * 180.0 / M_PI;

//   cout << "Углы треугольника:" << endl;
//   cout << "A = " << angleA_deg << " градусов (" << angleA << " радиан)" <<
//   endl; cout << "B = " << angleB_deg << " градусов (" << angleB << " радиан)"
//   << endl; cout << "C = " << angleC_deg << " градусов (" << angleC <<
//   "радиан)" << endl;

//   return 0;
// }

// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cout << "Введите пятизначное число: ";
//   cin >> x;
//   cout << "Сумма цифр: ";
//   cout << (x % 10) + (x / 10 % 10) + (x / 100 % 10) + (x / 1000 % 10) +
//               (x / 10000 % 10)
//        << endl;
// }

// #include <cstdio>
// #include <iostream>
// using namespace std;

// int main() {
//   unsigned int n, result;
//   scanf("%u", &n);
//   result = n & 8;
//   result = n >> 3;
//   printf("3 bit = %u", result);
//   return 0;
// }

// пример 2
// #include <iostream>

// #include <cmath>
// using namespace std;

// int main() {
//   float a, x;
//   a = 3.14159 / 2;
//   x = sin (a);
//   cout << "sin (90') = " << x << endl;
//   return 0;
// }