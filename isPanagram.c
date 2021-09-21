#include <stdio.h>

int isPanagram(char str[]){
    int count[26] = {0};
    int i;
    
    for(i =0; str[i]; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
        count[str[i] - 'A']++;
        
        else if(str[i] >= 'a' && str[i] <= 'z')
        count[str[i] - 'a']++;
        
        else
        continue;
    }
    for(i = 0; i < 26; i++)
        if(count[i] == 0)
            return 0;
    return 1;
}

int main()
{
  char str[100];
  
  scanf("%[^\n]", str);
  
  if(isPanagram(str))
    printf("%s is \"Panagram\"", str);
  else
    printf("%s is not Panagram", str);
  
  return 0;
}
 
