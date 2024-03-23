int main(void)
{
	int size_ = 4;
	char test_dest[][50] = {"QWERT0", "QWERT", "QWERTa", "QWERTY"};
	char test_src[][50] = {"QWERT", "QWERTY", "QWERTY", "QWERT0"};

	for (int i=0; i < size_; i++)
	{
		printf ("%s %s strcmp %d ft_strcmp %d\n", test_dest[i], test_src[i],
				strcmp(test_dest[i], test_src[i]),
				ft_strcmp(test_dest[i], test_src[i]));
	}
	return (0);
}
