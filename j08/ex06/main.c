
#include "ft_stock_par.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(int ac, char **av)
{
	t_stock_par *point;
	point = ft_param_to_tab(ac,av);
	ft_show_tab(point);
	return (0);
}
