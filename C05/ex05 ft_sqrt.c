int main(void)
{
  int size_ = 7;
  int test_cases[7] = {-5, 1, 3, 4, 7, 9, 16};
  int test_answers[7] = {0, 1, 0, 2, 0, 3, 4};

  for (int i=0; i < size_;  i++)
  {
    printf("%d %d | %d\n", test_cases[i], test_answers[i], ft_sqrt(test_cases[i]));
  }
  return (0);
}
