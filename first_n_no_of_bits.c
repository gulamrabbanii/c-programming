#include <stdio.h>
#include <stdlib.h>

void Binary(char arr[], int n)
{
    if(n < 1)
    printf("%s\n", arr);
    else{
        //
        arr[n-1] = '0';
        Binary(arr, n - 1);
        
        arr[n-1] = '1';
        Binary(arr, n-1);
    }
}
int main()
{
    int no_of_bits;
    char *arr;
    
    scanf("%d", &no_of_bits);
    arr = (char *)malloc(no_of_bits*sizeof(char));
    
    Binary(arr, no_of_bits);
    
    return 0;
}
