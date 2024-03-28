int main(void)
{
	int size_ = 6;
	char test_cases[6][20] = {"", "  1", " +-+--1", "  345", " 987@123", "   -123 456-789"};

	for (int i=0; i < size_; i++)
	{
		printf ("%s %d\n", test_cases[i], ft_atoi(test_cases[i]));
	}
	return (0);
}
