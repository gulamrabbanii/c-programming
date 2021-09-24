#include <stdio.h>
 
#define true 1
#define false 0
 
int isPowerOf(int n, int k)
{
  if(n==k || n==1)
    return true;
  if(n%k)
    return false;
  else
    return isPowerOf(n/k, k);
}
 
//driver function for testing
void testFunction(int n, int k)
{
  int out = isPowerOf(n, k);
  if(out)
    printf("%d is power of %d\n", n, k);
  else
    printf("%d is not power of %d\n", n, k);
}
void main()
{
  testFunction(10, 3);
  testFunction(15, 2);
  testFunction(64, 4);
  testFunction(27, 3);
  testFunction(81, 3);
}
