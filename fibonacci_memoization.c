#include <stdio.h>
int memo[1000];

int fibo(int n){
  if(memo[n] != -1)
    return memo[n];
 /* 
  if(n == 1)
    return (memo[n] = 0);
    
  if(n == 2)
    return (memo[n] = 1);
  */
  if(n <= 1)
  return (memo[n] = n); 
  
  return (memo[n] = fibo(n-1) + fibo(n-2));
  
}
int main()
{
  int num;
  scanf("%d", &num);
  
  for(int i = 0; i <= num; i++)
    memo[i] = -1;
  
  int res = fibo(num);
  printf("The term %d in fibonacci is %d", num, res);
  
  return 0;
}
 
