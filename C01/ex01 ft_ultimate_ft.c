int main(void)
{
	int i = 0;
	int *p_i = &i;
	int **p_p_i = &p_i;
	int ***p_p_p_i = &p_p_i;
	int ****p_p_p_p_i = &p_p_p_i;
	int *****p_p_p_p_p_i = &p_p_p_p_i;
	int ******p_p_p_p_p_p_i = &p_p_p_p_p_i;
	int *******p_p_p_p_p_p_p_i = &p_p_p_p_p_p_i;
	int ********p_p_p_p_p_p_p_p_i = &p_p_p_p_p_p_p_i;
	
	ft_ultimate_ft(&p_p_p_p_p_p_p_p_i);
	printf("%d", i);
}
