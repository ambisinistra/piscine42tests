int main(void)
{
	int size_ = 4;
	char dest_1[4][50] = {".... !! where to find my substring???@@@!",
		" where is my substring?", "", ""};
	char dest_2[4][50] = {".... !! where to find my substring???@@@!",
		" where is my substring?", "", ""};
	char src_1[4][20] = {"my substring", "", "  12345", ""};
	char src_2[4][20] = {"my substring", "", "  12345", ""};
	for (int i=0; i < size_; i++)
	{
		printf ("original strstr\n");
		printf ("%s\n%s\n%s\n-------\n", dest_1[i],
				src_1[i], strstr(dest_1[i], src_1[i]));
		printf ("ft strstr\n");
		printf ("%s\n%s\n%s\n-------\n", dest_2[i],
				src_2[i], ft_strstr(dest_2[i], src_2[i]));
	}
}
