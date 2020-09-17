//#include<stdio.h>

int mx_strcmp(const char*s1, const char*s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i])) {
      i++;
}
    return (unsigned const char)s1[i] - (unsigned const char)s2[i];
}

/*#include <string.h>
int main(){
  char s1[] = "d";
  char s2[] = "ff";
  printf("%d ", mx_strcmp(s1, s2));
  printf("%d", strcmp(s1, s2));
}*/
