#include <unistd.h>

void   ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_karim(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x <= '98')
	{
		while (y <= '99')
		{
			ft_putchar(y / 10);
			ft_putchar(y % 10);
			y++;			
		}
	x++
	}
}

char ====> Table ascii. 
int =====> valeur, nombre. 
ft_putchar(12);
ft_putchar(49);
ft_putchar(57);
----impression de 19-------
ft_putchar(48 + 1);
ft_putchar(48 + 9);
----impression de 19-------

ft_putchar(48); == ft_putchar('0');
ft_putchar(48 + 1); == ft_putchar('0' + 1);
ft_putchar(48 + 2); == ft_putchar('0' + 2);
ft_putchar(48 + 3); == ft_putchar('0' + 3);
ft_putchar(48 + 4); == ft_putchar('0' + 4); == ft_putchar('4');
ft_putchar(48 + 5); == ft_putchar('0' + 5); == ft_putchar('5');
ft_putchar(48 + 6); == ft_putchar('0' + 6); == ft_putchar('6');
ft_putchar(48 + 10); == ft_putchar('0' + 10); == ft_putchar(':');

int x;
y = 1;
d = y / 10;
u = y % 10;

ft_putchar(48 + y / 10);
ft_putchar(48 + y % 10);
y++; //y = 48;