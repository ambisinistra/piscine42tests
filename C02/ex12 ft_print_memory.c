int main(void)
{	
	char str[] = "Bonjour les aminches...c. est fou.to";
	for (int i=0; i < 40; i++)
	{
		printf ("-------------- iteration %d -----------------", i);
		ft_print_memory(str, i);
	}
}
