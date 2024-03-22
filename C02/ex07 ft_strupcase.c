int main(void)
{
  int size_ = 1;
  char test_cases[1][10] = {"iDhTns123@"};

  for (int i=0; i < size_; i++)
  {
	  printf ("%s \n", ft_strupcase(test_cases[i]));
  }
  return (0);
}
