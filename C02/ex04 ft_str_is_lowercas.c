int	main(void)
{
  int size_ = 4;
  char test_cases[4][4] = {"aoe", "AoE", "@", "", "1"};
  for (int i=0; i < size_; i++)
  {
    printf("%s %d\n", ft_str_is_lowercase(test_cases[i]));
  }	 
  return (0);
}
