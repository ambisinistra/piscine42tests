int main(void)
{
	char	str_1[] = "";
	char	str_2[] = "00001";
	char	str_3[] = "12345";
	char	str_4[] = "12345a";
	
	printf ("%s %d || ", str_1, ft_str_is_numeric(str_1));
	printf ("%s %d || ", str_2, ft_str_is_numeric(str_2));
	printf ("%s %d || ", str_3, ft_str_is_numeric(str_3));
	printf ("%s %d ||\n", str_4, ft_str_is_numeric(str_4));
	return (0);
}
