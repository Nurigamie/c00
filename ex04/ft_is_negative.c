#include <stdio.h>

void ft_is_negative(int n)
{
	if(n>-1){
		printf("N");
	}
	else{printf("P");
}
}
int main(void){
	ft_is_negative(5);
	return (0);
}