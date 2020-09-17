//#include <stdio.h>

int mx_strcmp(const char*s1, const char*s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int right = size;
    int left = -1;

    while (left < right - 1) {
    int mid = left + (right - left)/2;
    ++*count;
    if (mx_strcmp(arr[mid], s) == 0) {
      return mid;
    }
    else if (mx_strcmp(arr[mid], s) < 0) {
      left = mid;
    }
    else {
      right = mid;
    }
  }
      *count = 0;
      return -1;
    }


/*int main(){
  char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
  int count = 0;
  printf("%d %d", mx_binary_search(arr, 6, "aBc", &count), count);
}*/
