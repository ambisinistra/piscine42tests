int main(void)
{
  int size_ = 5; 
  int test_cases[5] = {-5, 0, 1, 2, 3, 4};
  int test_answers[5] = {0, 0, 1, 2, 6, 24};

  for (int i; i < size; int++)
  {
    printf ("%d %d %d \n", test_cases[i], test_answers[i], ft_recursive_factorial(test_cases[i]));
  }
  return (0);
}
