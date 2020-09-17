#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
     if (n == -2147483648) {
      const char buf[] = "-2147483648";
    write(1, &buf, 11);
    }
    else if (n < 0) {
    mx_printchar('-');
    mx_printint(n * (-1));
    }
  if (n >= 0 && n < 10) {
    mx_printchar(n + '0');
  }
  else if (n > 9) {
    mx_printint(n / 10);
    mx_printchar((n % 10) + '0');
  }
}


 /*int main() {
  int n = -2147483648;
  mx_printint(n);
  return 0;
}*/
