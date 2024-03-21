int	main(void)
{
  int size_ = 5;
  char test_cases[5][4] = {"aoe", "AoE", "@", "", "1"};
  for (int i=0; i < size_; i++)
  {
	  printf("%s %d ||", test_cases[i], ft_str_is_lowercase(test_cases[i]));
  }
  printf ("\n");
  return (0);
}
