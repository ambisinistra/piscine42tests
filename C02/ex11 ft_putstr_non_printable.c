int main(void)
{
  int size_ = 1;
  char test_cases[1][20] = {"Coucou\ntu vas bien ?"};
  char test_answers[1][20] = {"Coucou\0atu vas bien ?"};

  for (int i=0; i < size_; i++)
  {
    print ("%s\n%s\n\n", test_cases[i], test_answers[i]);
  }
  return (0);
}
