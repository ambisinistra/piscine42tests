int main(void)
{
	int size_ = 2;
	char dest_1[2][30] = {"qwerty", "qwerty\0           "};
	char src_1[2][30] = {" shmerty not", " shmerty not"};
	char dest_2[2][30] = {"qwerty", "qwerty\0           "};
	char src_2[2][30] = {" shmerty not", " shmerty not"};
	int chars_[2] = {8, 8};
	
	for (int i=0; i < size_; i++)
	{
	printf ("ft_strncat %s\n", ft_strncat(dest_1[i], src_1[i], chars_[i]));
	printf ("   strscat %s\n", strncat(dest_2[i], src_2[i], chars_[i]));
	}
	return (0);
}
