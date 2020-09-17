//#include <stdio.h>

unsigned long mx_hex_to_nbr(const  char *hex) {
    unsigned long decval = 0;

    for (int i = 0; hex[i] != '\0'; i++) {
      if (hex[i] >= '0' && hex[i] <= '9') {
        decval = decval * 16 + (hex[i] - 48);
      }
      else if (hex[i] >= 'A' && hex[i] <= 'F') {
        decval = decval * 16 + (hex[i] - 55);
      }
      else {
        decval = decval * 16 + (hex[i] - 87);
      }
    }
    return decval;
}

/*int main() {
  printf("%lu", mx_hex_to_nbr("FADE"));
}*/
