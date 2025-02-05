void	ft_rev_int_tab(int *tab, int size)
{
	int		*tab_rev;
	int		counter;
	int		temp;

	tab_rev = tab + size - 1;
	counter = 0;
	while (counter < size / 2)
	{
		temp = *tab;
		*tab = *tab_rev;
		*tab_rev = temp;
		tab++;
		tab_rev--;
		counter++;
	}
}
