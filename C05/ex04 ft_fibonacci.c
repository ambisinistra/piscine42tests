int main(void)
{
  int size_ = 7;
  int test_index[7] = {-5, 0, 1, 2, 3, 4, 5};
  int test_answers[7] = {-1, 0, 1, 1, 2, 3, 5};

  for (int i=0; i < size_; i++)
  {
    printf ("%d %d | %d\n", test_index[i], test_answers[i],
	    ft_fibonacci(test_index[i]));
  }
  return (0);
}
