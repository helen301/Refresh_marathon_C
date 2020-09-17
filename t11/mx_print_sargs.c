
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
int mx_strcmp(const char*s1, const char*s2);

int main(int argc, char *argv[]){
    for (int i = 1; i < argc - 1; i++) {
    for (int k = i + 1; k < argc; k++) {
        if (mx_strcmp(argv[i], argv[k]) > 0) {
          char *temp = argv[i];
          argv[i] = argv[k];
          argv[k] = temp;
      }
    }
    }
    for (int a = 1; a < argc; a++) {
      mx_printstr(argv[a]);
      mx_printchar('\n');
    }
}
