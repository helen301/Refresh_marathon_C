//#include <stdio.h>

int mx_strlen(const char *s) {
    int i = 0;

    while(s[i] != '\0') {
        i++;
    }
      return i;
}

/* int main(){
    char s[]="dddiiirrrrr";
    printf("%d\n", mx_strlen(s));
    return 0;
} */