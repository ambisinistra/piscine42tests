int main(void)
{
  int size_ = 7;
  int test_cases[7] = {0, 1, -3, 71, 73, 89, 97};
  int test_answers[7] = {0, 0, 0, 1, 1, 1, 1};

  for(int i=0; i < size_; i++)
  {
    printf ("%d %d | %d", test_cases[i], test_answers[i], ft_is_prime(test_cases[i]));
  }
  return (0);
}
