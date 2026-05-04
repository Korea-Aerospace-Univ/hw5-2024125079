#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int N = 0;
  bool check = false;
  scanf("%d", &N);
  int A = 900, B = 750, C = 200;

  for(int i = 1; i <= N/A; i++){    
    for(int j = 2; j <= N/B; j+=2){
      for(int k = 1; k <= N/C; k++){
        if((i*A + j*B + k*C) == N && (i > k || j > k)){
            printf("%d %d %d\n", i, j, k);
            check = true;
        }
      }
    }
  }
  if(!check){
    printf("none");
  }
  
  return 0;
}
