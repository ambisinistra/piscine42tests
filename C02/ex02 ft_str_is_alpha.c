int main(void)
{
	char	str_1[] = "";
	char	str_2[] = "AoE";
	char	str_3[] = "Aoe@";
	char	str_4[] = "AoeE11";
	
	printf ("%s %d || ", str_1, ft_str_is_alpha(str_1));
	printf ("%s %d || ", str_2, ft_str_is_alpha(str_2));
	printf ("%s %d || ", str_3, ft_str_is_alpha(str_3));
	printf ("%s %d ||\n", str_4, ft_str_is_alpha(str_4));
	return (0);
}
