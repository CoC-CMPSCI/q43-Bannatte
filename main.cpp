#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  int first, second, third;

  if (num1 >= num2 && num1 >= num3) {
    first = num1;
    if (num2 >= num3) {
      second = num2;
      third = num3;
    } else {
      second = num3;
      third = num2;
    }
  } else if (num2 >= num1 && num2 >= num3) {
      first = num2;
      if (num1 >= num3) {
          second = num1;
          third = num3;
      } else {
          second = num3;
          third = num1;
      }
  } else { // num3 is the largest
      first = num3;
      if (num1 >= num2) {
          second = num1;
          third = num2;
      } else {
          second = num2;
          third = num1;
      }
  }
  cout << first << " " << second << " " << third << endl;
  return 0;
}
