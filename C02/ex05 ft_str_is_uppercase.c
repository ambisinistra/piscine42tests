int main(void)
{
  int size = 4;
  char test_cases[4][4] = {"AOE", "AoE", "", "@"};
  for (int i=0; i < size; i++)
  {
    printf ("%s %d || ", test_cases[i], ft_str_is_uppercase(test_cases[i]));
  }
  return (0);
}
