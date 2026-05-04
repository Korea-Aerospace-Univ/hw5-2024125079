#include <stdio.h>
int main(void)
{
  int N = 0;
  int found = 0;
  scanf("%d", &N);
  
  int A = 900, B = 750, C = 200;
  
  for(int i = 1; i <= N/A; i++){
    for(int j = 1; j <= N/B; j++){
      for(int k = 1; k <= N/C; k++){
        if((i*A + j*B + k*C) == N){
            if(j % 2 == 0){
                if(i > k || j > k){
                  printf("%d %d %d\n", i, j, k);
                  found = 1;
                }
            }
        }
      }
    }
  }
  if(found == 0){
    printf("none");
  }
  
  return 0;
}
