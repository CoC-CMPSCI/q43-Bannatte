int num1, num2, num3;
cin >> num1 >> num2 >> num3;
int min;

if ((num1 < num2) && (num1 < num3)) {
  min = num1;
} else {
  min = (num2 < num3) ? num2 : num3;
}

return min
