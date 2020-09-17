//#include<stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    int i = 0;

    for (i = 0; src[i] != '\0'; i++) {
      dst[i] = src[i];
    }
      dst[i] = '\0';
      return dst;
    }

/*int main(){
  char a[] = "heyheyhey";
  char b[] = "people";
  printf("%s\n", a);
  printf("%s\n", mx_strcpy(a, b));
  printf("%s\n", a);
}*/
