//Write a menu driven program to construct a calculator for following arithmetic operator: +, -, *, /, %.

#include <stdio.h>

int main() {

  char op;
  double first, second;

  printf("\tAryan Sharma");
  printf("\n");
  printf("'x' stands for avg");
  printf("\nEnter an operator (+, -, *, /, x): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    case 'x':
      printf("(%.1lf + %.1lf) / 2 = %.1lf", first, second, (first + second) / 2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
