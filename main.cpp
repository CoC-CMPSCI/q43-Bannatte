#include <iostream>
using namespace std;

int max2(int a, int b) {
    return (a > b) ? a : b;
}

int min2(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int first = max2(max2(num1, num2), num3);
    int third = min2(min2(num1, num2), num3);
  
    int second = num1 + num2 + num3 - first - third;
  
    cout << first << " " << second << " " << third << endl;
    return 0;
}
