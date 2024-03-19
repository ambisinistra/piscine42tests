int main(void)
{
	int tab[5] = {0,1,2,3,4};

	ft_rev_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
	{
		printf ("%d, ", tab[i]);
	}
	printf("\n");
}
