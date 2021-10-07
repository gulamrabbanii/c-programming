#include <stdio.h>

t[256],i;
int main(c)
{
    for(;c+3;)
        (i=getchar())>10?t[i]+=c:(c-=2);
  
    for(i=257;--i&&!t[i-1];);
    puts(i?"false":"true");
  
    return 0;
}
