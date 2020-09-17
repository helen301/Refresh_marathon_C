//#include <stdio.h>

void mx_sort_arr_int(int *arr, int size){
    for (int i = 0; i < (size - 1); i++) {
    for (int j = 0; j < (size - i - 1); j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

/* int main(){
  int arr[] = {3, 55, -11, 6, 0, 1, 8};
  mx_sort_arr_int(arr, 7);
  for(int i = 0;i < 7;i++)
  printf("%d ", arr[i]);
}*/
