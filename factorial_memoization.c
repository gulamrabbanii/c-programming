#include <stdio.h>
int memo[1000];

int fact(int n){
    
  if(memo[n] != -1)
    return memo[n];
  
  if(n == 0)
    return (memo[n] = 1);
    
    return (memo[n] = n*fact(n-1));
  
}
int main()
{
  int num;
  scanf("%d", &num);
  
  for(int i = 0; i <= num; i++)
    memo[i] = -1;
  
    printf("The term %d in fibonacci is %d", num, fact(num));
  
  return 0;
}
 
