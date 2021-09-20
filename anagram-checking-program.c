#include <stdio.h> 
#define NO_OF_CHARS 256
//function to checking whether two string are anagram or not
//return 1 if true, 0 if false
int isAnagram(char s1[], char s2[]){
    int i;
  //partial initialization of count array
  //count array is used for mapping of ascii character with count array indices and count array contains count of occurence of character
    int count[NO_OF_CHARS] = {0};
    
    for(i = 0; s1[i] && s2[i]; i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if(s1[i] || s2[i])
    return 0;
    
    for(i = 0; i < NO_OF_CHARS; i++){
        if(count[i] != 0)
        return 0;
    }
    return 1;
}
//driver code
int main()
{
    char s1[NO_OF_CHARS], s2[NO_OF_CHARS];
 
    fgets(s1, NO_OF_CHARS, stdin);
    fgets(s2, NO_OF_CHARS, stdin);
    
    if(isAnagram(s1, s2))
    printf("Anagram");
    else
    printf("Not Anagram");
 
    return 0;
}
