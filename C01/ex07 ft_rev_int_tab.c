int main(void)
{
	int tab_5[5] = {0,1,2,3,4};

	ft_rev_int_tab(tab_5, 5);
	for (int i = 0; i < 5; i++)
	{
		printf ("%d, ", tab_5[i]);
	}
	printf(" ");

	int tab_4[4] = {0,1,2,3};
	ft_rev_int_tab(tab_4, 4);
	for (int i = 0; i < 4; i++)
	{
		printf ("%d, ", tab_4[i]);
	}
	return 0;
}
