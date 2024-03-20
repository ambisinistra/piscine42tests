int main(void)
{
	char str_s[] = "0123456789";
	char str_d[] = "          ";

	ft_strncpy(str_d, str_s, 5);
	printf("01234 %s\n", str_d);
	return (0);
}
