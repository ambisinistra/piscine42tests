int main(void)
{
	int size_ = 4;
	int test_length[] = {8, 8, 8, 2};
	char test_dest[][50] = {"QWERTY", "QWERT", "QWERTa", "QWERTY"};
	char test_src[][50] = {"QWERT", "QWERT0", "QWERTY", "QWERT0"};
	
	for (int i=0; i < size_; i++)
	{
		printf ("%d %s %s %d %d\n", test_length[i], test_dest[i], test_src[i],
				strncmp(test_dest[i], test_src[i], test_length[i]),
				ft_strncmp(test_dest[i], test_src[i], test_length[i]));
	}
	return (0);
}
