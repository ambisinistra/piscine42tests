int main(void)
{
	int size_ = 3;
	char tests_cases[3][20] = {"", "1", "1234567890"};

	for (int i=0; i < size_; i++)
	{
		ft_putstr(tests_cases[i]);
		write(1, &"\n", 1);
	}
	return (0);
}
