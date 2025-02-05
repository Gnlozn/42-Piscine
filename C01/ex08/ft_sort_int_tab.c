void	ft_sort_int_tab(int *tab, int size)
{
	int		counter_a;
	int		counter_b;
	int		temp;

	counter_a = 0;
	while (counter_a < size - 1)
	{
		counter_b = 0;
		while (counter_b < size - 1)
		{
			if (tab[counter_b] > tab[counter_b + 1])
			{
				temp = tab[counter_b];
				tab[counter_b] = tab[counter_b + 1];
				tab[counter_b + 1] = temp;
			}
			counter_b++;
		}
		counter_a++;
	}
}
