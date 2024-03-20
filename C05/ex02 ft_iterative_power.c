int main(void)
{
  size_ = 7;
  int test_cases[7] = {0, 1, 2, 3, -1, 10, 1};
  int test_powers[7] = {0, 1, 2, 3, 2, 5,  -1};
  int test_answers[7] = {0, 1, 4, 27, 1, 100000, 0};

  for (int i=0; i < size_; i++)
  {
    printf ("%d %d || %d %d\n", test_cases[i], test_powers[i], test_answers[i],
	    ft_iterative_power(test_cases[i], test_powers[i]));
  }
  return (0);
}
