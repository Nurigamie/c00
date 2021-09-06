#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
        char ch = 'z';
    while(ch <= 'a')
{
    putchar(ch);
	ch++;
	    }
}

int main ()
{
        ft_print_alphabet();
        return(0);
}