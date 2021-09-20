#include <stdio.h> 


void Kstring(int n, int k) 
{ 
    static char A[n]; 
	if(n<1) 
		printf("%s\n", A); 
	else 
	{ 
		for(int j = 0;j < k; j++) 
		{ 
			A[n-1] = j + 48; 
			Kstring(n-1, k); 
		} 
	} 
} 
int main() { 
  //n -> length of string of number
  //k-> k number of elements
  /*
  n = 2 ie n-number of digits
  k = 3 ie using 0, 1, 3 numbers
      00
      10
      20
      01
      11
      21
      02
      12
      22
*/
    int n, k;

	scanf("%d%d", &n, &k);
	Kstring(n,k); 

	return 0; 
}
