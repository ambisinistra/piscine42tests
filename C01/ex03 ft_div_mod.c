int main(void)
{
	int a = 10;
	int b = 3;
	int div_ = 0;
	int mod_ = 0;
	ft_div_mod(a, b, &div_, &mod_);
	printf ("result of division %d on %d will be %d with mod %d", a, b, div_, mod_);
	return 0;
}
