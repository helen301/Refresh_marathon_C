//#include <stdio.h>

int mx_sqrt(int x){
  int result = 0;
  int i = 0;
  
  if (x%2 != 0){
    return 0;
  }
  if (x < 0){
    return 0;
  }
  for (; i*i <= x; i++){
    result=i;
  }
  if (result*result == x)
    return result;
    return 0;
}

/* int main(){
  printf("%d\n", mx_sqrt(3));
}*/
