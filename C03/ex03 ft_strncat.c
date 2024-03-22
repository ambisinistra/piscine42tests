int main(void)
{
	char dest[] = "qwerty";
	char src[] = " shmerty not";

	printf ("%s\n", ft_strncat(dest, src, 8));
	printf ("%s\n", strncat(dest, src, 8));
	return (0);
}
