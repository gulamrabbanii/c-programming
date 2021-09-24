#include <stdio.h>

int main()
{	
	int i, prev, n, maxans, cur;
	
	char str_num[50];
	scanf("%s%n", str_num, &n);
	
	if(n < 3){
		printf("-1"); 
		return 0;
	}
	
	maxans = ((str_num[0]-'0')*100 + (str_num[1]-'0')*10 + str_num[2]-'0');
	prev = maxans;
	for(i = 3; i < n; i++){
		cur = (prev%100)*10 + (str_num[i]-'0');
		maxans = maxans > cur? maxans : cur;
		prev = cur;
	}
	printf("%d", maxans);
	return 0;
}
	
