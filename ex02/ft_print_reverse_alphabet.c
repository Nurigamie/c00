#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
        char ch = 'z';
    while(ch >= 'a')
{
    write(1, &ch, 1);
	ch--;
	    }
}

int main(void)
{
        ft_print_reverse_alphabet();
        return(0);
}