int main(void)
{
	char str_s[] =  "0123456789";
	char str_d1[] = "          ";
	char str_d2[] = "          ";
	
	strcpy(str_d1, str_s);
	ft_strcpy(str_d2, str_s);
	printf("original strcpy %s\n", str_d1);
	printf("ft strcpy %s\n", str_d2);
	return (0);
}
