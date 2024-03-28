int main(void)
{
  int size_ = 6; 
  int test_cases[6] = {-5, 0, 1, 2, 3, 4};
  int test_answers[6] = {0, 1, 1, 2, 6, 24};

  for (int i=0; i < size_; i++)
  {
    printf ("%d %d || %d \n", test_cases[i], test_answers[i], ft_iterative_factorial(test_cases[i]));
  }
  return (0);
}
