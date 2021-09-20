#include <stdio.h>
//Program to verify all square boxes of sudoku
int squareCheck(int a[10][10]){
    int i, j, m, n, cnt = 0;
    //partial population of count array as no number is occured
    int count[10] = {0};
    
    for(m = 0; m < 9; m +=3){
        for(n = 0; n < 9; n+=3){
            for(i = m; i < m+3; i++){
                for(j = n; j < n+3; j++){
                    //counting occurence of a number and storing in count array
                    count[a[i][j]]++;
                }
            }
            cnt++;
            for(int k = 1; k <= 9; k++){
                if(count[k] != 1){
                    printf("%d repeats %d times in %d box\n", k, count[k], cnt);
                    return 0;
                }
            }
            for(int k = 1; k <= 9; k++)
            count[k] = 0;
        }
    }
    return 1;
}
//Program to verify all columns of sudoku
int colCheck(int a[10][10])
{
    int count[10] = {0};
    int i, j, k;
    
    for(i = 0; i < 9; i ++){
        for(j = 0; j < 9; j++){
            //counting occurence of a number and storing in count array
            count[a[j][i]]++;
        }
    
    for(k = 1; k <= 9; k++){
        if(count[k] != 1){
            printf("%d repeats %d times at %d column\n", k, count[k], i+1);
            return 0;
        }
    }
    
    for(k = 1; k <= 9; k++)
        count[k] = 0;
    }
    return 1;
}
//Program to verify all rows of sudoku
int rowCheck(int a[10][10])
{
    int count[10] = {0};
    int i, j, k;
    
    for(i = 0; i < 9; i ++){
        for(j = 0; j < 9; j++){
            //counting occurence of a number and storing in count array
            count[a[i][j]]++;
        }
    
    for(k = 1; k <= 9; k++){
        if(count[k] != 1){
            printf("%d repeats %d times at %d row\n", k, count[k], i+1);
            return 0;
        }
    }
    
    for(k = 1; k <= 9; k++)
        count[k] = 0;
    }
    return 1;
}
int main()
{
    int arr[10][10] = {
                    {1, 2, 3, 4, 5, 6, 7, 8, 9},
                    {4, 5, 6, 7, 8, 9, 1, 2, 3},
                    {7, 8, 9, 1, 2, 3, 4, 5, 6},
                    {2, 3, 4, 5, 6, 7, 8, 9, 1},
                    {5, 6, 7, 8, 9, 1, 2, 3, 4},
                    {8, 9, 1, 2, 3, 4, 5, 6, 7},
                    {3, 4, 5, 6, 7, 8, 9, 1, 2},
                    {6, 7, 8, 9, 1, 2, 3, 4, 5},
                    {9, 1, 2, 3, 4, 5, 6, 7, 8}
                    };
                    
    if(rowCheck(arr) == 1 && colCheck(arr) == 1 && squareCheck(arr) == 1){
        printf("success");
    }
    else
    printf("unsuccessful");
    
    return 0;
}
