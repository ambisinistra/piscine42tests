int main(void)
{
	int size_ = 5;
	char bases[7][20] = {"", "a", "abcdef-", "abcddaeu", "abc+", "01234agi", "exampl"};

	for (int i=0; i < size_; i++)
		ft_putnbr_base(123, bases[i]);

	int new_size = 3;
	char good_bases[3][20] = {"0123456789", "0123456789", "0123456789"};
	int numbers[3] = {1, 100, 123};

	for (int i=0; i < new_size; i++)
	{
		ft_putnbr_base(numbers[i], good_bases[i]);
		write (1, "\n", 1);
	}
}
