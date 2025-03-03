// #include <iostream>
// using namespace std;

// int main() {
//   int chet = 0;
//   int nechet = 0;

//   int x;
//   cin >> x;

//   while (x) {
//     if (x % 2 == 0) {
//       chet++;
//     } else {
//       nechet++;
//     }
//     cin >> x;
//   }
//   if (chet > nechet) {
//     cout << "верно" << endl;
//   } else {
//     cout << "неверно" << endl;
//   }
// }

// #include <iostream>
// #include <ostream>
// using namespace std;

// int main() {
//   int x;
//   cin >> x;
//   int s, ms;
//   s = 0;
//   ms = 0;

//   while (x) {
//     int c = x % 10;
//     if (c > ms)
//       ms = c;
//     s += c;
//     x /= 10;
//   }
//   cout << "Макс цифра: " << ms << endl;
//   cout << "Сумма: " << s << endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   float res;
//   res = 0;

//   for (float x = 0; x <= n; x++) {
//     res += x / (x + 1);
//   }
//   cout << res;
// }