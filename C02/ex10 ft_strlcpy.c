int main(void)
{
  int size_ = 1;
  char test_cases[1][10] = {"aoeuidhht"};
  char test_n[1] = 5;
  char strlcpy_orig[1][10] = {""};
  char ft_strlcpy_a[1][10] = {""};

  for (int i=0; i < size_; i++)
  {
    strlcpy(strlcpy_orig[i], test_cases[i], test_n[i]);
    ft_strlcpy(ft_strlcpy_a[i], test_cases[i], test_n[i]);
    printf ("%s %s\n", strlcpy_orig[i], ft_strlcpy_a[i]);
  }
  return (0);
}
