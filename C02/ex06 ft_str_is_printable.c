int main(void)
{
  char str[2] = "  ";
  for (int i=0; i < 255; i++)
  {
	  str[0] = (char)i;
	  printf ("%s%d ", str, ft_str_is_printable(str));
  }
  printf ("\n");
  return (0);
}
