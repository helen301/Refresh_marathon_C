//#include <stdio.h>

int mx_strcmp(const char*s1, const char*s2);

int mx_bubble_sort(char **arr, int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
      for (int k = 0; k < size - i - 1; k++) {
        if (mx_strcmp(arr[k], arr[k + 1]) > 0) {
          char *temp = arr[k];
          arr[k] = arr[k + 1];
          arr[k + 1] = temp;
          count++;
        }
      }
    }
       return count;
  }

/*int main(){
  char *arr[] = {"abc", "xyz", "ghi", "def"};
  printf("%d", mx_bubble_sort(arr, 4));
}*/
