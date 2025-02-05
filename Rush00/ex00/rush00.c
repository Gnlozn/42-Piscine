#include <unistd.h>

void	ft_putchar(char c);

int	check(int col, int line)
{
	if (col <= 0 || line <= 0)
	{
		write(1, "0 or lower not allowed.\n", 25);
		return (1);
	}
	return (0);
}

void	rush(int col, int line)
{
	int	bline;
	int	bcol;

	if (check (col, line) == 1)
		return ;
	bline = 1;
	while (bline <= line)
	{
		bcol = 1;
		while (bcol <= col)
		{
			if ((bline == 1 || bline == line) && (bcol == 1 || bcol == col))
				ft_putchar('o');
			else if (bline == 1 || bline == line)
				ft_putchar('-');
			else if (bcol == 1 || bcol == col)
				ft_putchar('|');
			else
				ft_putchar(' ');
			bcol++;
		}
		ft_putchar('\n');
		bline++;
	}
}
