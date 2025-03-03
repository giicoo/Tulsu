// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//   double x1, y1, x2, y2, x3, y3;
//   cout << "Введите координаты A (x1, y1): ";
//   cin >> x1 >> y1;
//   cout << "Введите координаты B (x2, y2): ";
//   cin >> x2 >> y2;
//   cout << "Введите координаты C (x3, y3): ";
//   cin >> x3 >> y3;

//   if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1)) {
//     cout << "Точки лежат на одной прямой." << endl;
//   } else {
//     double ax = x1 - x2, ay = y1 - y2;
//     double cx = x3 - x2, cy = y3 - y2;
//     double dotProduct = ax * cx + ay * cy;
//     double magnitudeA = sqrt(ax * ax + ay * ay);
//     double magnitudeC = sqrt(cx * cx + cy * cy);
//     cout << "Угол ABC: "
//          << acos(dotProduct / (magnitudeA * magnitudeC)) * 180.0 / M_PI
//          << " градусов." << endl;
//   }
// }

// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//   int num;
//   cout << "Введите целое число: ";
//   cin >> num;
//   if (num == 0)
//     cout << "нулевое число" << endl;
//   else {
//     string chetpart = (num % 2 == 0) ? "четное" : "нечетное";
//     string znakpart = (num > 0) ? "положительное" : "отрицательное";
//     cout << chetpart + " " + znakpart + " число" << endl;
//   }
// }

// #include <cmath>
// #include <iostream>
// using namespace std;

// int main() {
//   double x, y;
//   cout << "Введите координаты точки (x, y): ";
//   cin >> x >> y;
//   if ((x >= 1) && (x < 3)) {
//     if ((y >= 6) && (y <= 8)) {
//       cout << "Точка принадлежит закрашенной области." << endl;
//       return 0;
//     } else {
//       cout << "Точка не принадлежит закрашенной области." << endl;
//       return 0;
//     }
//   }

//   if ((x >= 3) && (x < 5)) {
//     if ((y >= 2) && (y <= 8)) {
//       cout << "Точка принадлежит закрашенной области." << endl;
//       return 0;
//     } else {
//       cout << "Точка не принадлежит закрашенной области." << endl;
//       return 0;
//     }
//   }

//   if ((x > 5) && (x <= 7)) {
//     if ((y >= 6) && (y <= 8)) {
//       cout << "Точка принадлежит закрашенной области." << endl;
//       return 0;
//     } else {
//       cout << "Точка не принадлежит закрашенной области." << endl;
//       return 0;
//     }
//   }
//   cout << "Точка не принадлежит закрашенной области." << endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int number;
//   cout << "Введите шестизначное число: ";
//   cin >> number;

//   int firstHalf = number / 1000;
//   int secondHalf = number % 1000;

//   int sum1 = (firstHalf / 100) + ((firstHalf / 10) % 10) + (firstHalf % 10);
//   int sum2 = (secondHalf / 100) + ((secondHalf / 10) % 10) + (secondHalf %
//   10);

//   if (sum1 == sum2) {
//     cout << "Число счастливое!" << endl;
//   } else {
//     cout << "Число не является счастливым." << endl;
//   }

//   return 0;
// }

#include <iostream>

using namespace std;

int main() {
  int speed;

  cout << "Введите скорость ветра (м/с): ";
  cin >> speed;

  switch (speed) {
  case 1:
  case 2:
  case 3:
  case 4:
    cout << "Слабый ветер (1)" << endl;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    cout << "Умеренный ветер (2)" << endl;
    break;
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
  case 18:
    cout << "Сильный ветер (3)" << endl;
    break;
  default:
    cout << "Ураганный ветер (4)" << endl;
  }

  return 0;
}
