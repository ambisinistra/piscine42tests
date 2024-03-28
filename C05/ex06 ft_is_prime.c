int main(void)
{
	printf ("prime numbers\n");
	for (int i=0; i < 100; i++)
		if (ft_is_prime(i))
			printf ("%d, ", i);
}
