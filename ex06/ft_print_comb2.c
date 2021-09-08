#include <stdio.h>
void    write_nb(int i, int j)
{
    char    tab[8];

    tab[0] = (i / 10) + '0';
    tab[1] = (i % 10) + '0';
    tab[2] = ' ';
    tab[3] = (j / 10) + '0';
    tab[4] = (j % 10) + '0';
    tab[5] = ',';
    tab[6] = ' ';
    tab[7] = '\0';
    write(1, &tab, 10);
}
void ft_print_comb2(void)
{
    int i = 0;
    int j = 0;
    while (i < 99)
    {
        
        while (j < 99)
        {
            write_nb(i,j);
            ++j;
        }
        write_nb(i, j);
        ++i;
    }
}

    int main(void)
    {
    ft_print_comb2();
    return(0);    
    }