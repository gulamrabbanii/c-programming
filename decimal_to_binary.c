#include <stdio.h> 
//function to convert decimal number to binary
//method-01
int convert(int dec){
    if (dec == 0)
    return 0;
    
    else{
        return ((dec % 2) + 10 * convert(dec / 2));
    }
}

//method-02
/*
void decToBinary(int num)
{
    if (num == 0)
        return;

    decToBinary(num / 2);
    printf("%d", num % 2);
}
*/

//method-03
/*
int binary(int num)  
{  
    int rem, bin = 0, place = 1;  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    return(bin);  
}
*/
int main()
{
    int dec, bin;
 
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = convert(dec);
    printf("The binary equivalent of %d is %d.\n", dec, bin);
    
    // uncomment to test method-02
    // printf("The binary equivalent of %d is: ", dec);
    // decToBinary(dec);
    
    // uncomment to test mehthod-03
    // printf("The binary equivalent of %d is %d.\n", dec, binary(dec));
    return 0;
}
