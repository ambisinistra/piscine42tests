int main(void)
{
  int size_ = 1;
  char	test_cases[1][100] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};

  for (int i=0; i < size_; i++)
  {
	  printf ("%s \n", ft_strcapitalize(test_cases[i]));
  }
  return (0);
}
