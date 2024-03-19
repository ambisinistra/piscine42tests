int main(void)
{
	int tab[10] = {2, 1, 8, 9, 0, 3, 5, 4, 7, 6};

	ft_sort_int_tab(tab, 10);
	for (int i = 0; i <= 10; i++)
	{
		printf ("%d", tab[i]);
	}
	printf ("\n");
	return 0;
}
