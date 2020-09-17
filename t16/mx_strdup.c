//#include <stdio.h>
#include <stddef.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *result = mx_strnew(mx_strlen(str));
    if (NULL == result){
      return NULL;
    }
    result = mx_strcpy(result, str);
    return result;
}

/*int main(){
  char *str = "hello";
  printf("%s", mx_strdup(str));
}*/
