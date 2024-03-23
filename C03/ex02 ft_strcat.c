int main(void)
{
	int size_ = 2;
	char dest_1[2][30] = {"qwerty", "qwerty\0         "};
	char dest_2[2][30] = {"qwerty", "qwerty\0         "};
	char src_1[2][30] = {" shmerty not", " shmerty not"};
	char src_2[2][30] = {" shmerty not", " shmerty not"};

	for (int i=0; i < size_; i++)
	{
		printf ("ft_strcat %s\n", ft_strcat(dest_1[i], src_1[i]));
		printf ("   strcat %s\n", strcat(dest_2[i], src_2[i]));
	}
	return (0);
}
