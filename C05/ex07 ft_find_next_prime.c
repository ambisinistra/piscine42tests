int main(void)
{
  int size_ = 7;
  int test_cases[7] = {0, 1, -3, 71, 72, 89, 96};
  int test_answers[7] = {2, 2, 2, 71, 73, 89, 97};

  for(int i=0; i < size_; i++)
  {
    printf ("%d %d | %d\n", test_cases[i], test_answers[i], ft_find_next_prime(test_cases[i]));
  }
  return (0);
}
