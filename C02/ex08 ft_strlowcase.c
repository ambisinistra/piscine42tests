int main(void)
{
  int size_ = 1;
  char test_cases[1][10] = {"pYfGcR123@"};

  for (int i=0; i < size_; i++)
    {
      printf ("%s \n", ft_strlowcase(test_cases[i]));
    }
  return (0);
}
