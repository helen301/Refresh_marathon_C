//#include <stdio.h>

int mx_factorial_iter(int n) {
    long long int numb = 2147483647;
    long long int result = 1;

    if (n < 0) {
      return 0;
    }
    else if (n == 0) {
      return 1;
    }
    for (; n > 1; n--) {
      result *= n;
    }
    if (result <= numb)
      return (int)result;
    else
      return 0;
}


/*int main(){
  int n = 0;
  printf("%d", mx_factorial_iter(n));
}*/
