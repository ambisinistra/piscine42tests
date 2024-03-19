int main(void)
{
	int a = 10;
	int b = 3;
	
	int result_a = a;
	int result_b = b;

	ft_ultimate_div_mod(&result_a, &result_b);
	printf("result of division %d on %d will be %d with mod %d", a, b, result_a, result_b);
	return 0;
}
