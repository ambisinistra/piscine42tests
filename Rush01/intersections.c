#include <stdio.h>
#include <stdlib.h>

void find_intersections(int *inter, char *hor, char *ver, int y, int x)
{
   int i = 0;
   int j = 0;
   
   while (ver[i])
   { 
      if (i % 5 == y)
      {
		j = 0;
        while (hor[j])
        {
		  printf ("j %d %d\n", j % 5, x);
          if (j % 5 == x)
          {
			if (ver[i] == hor[j] && ver[i] >= '1' && ver[i] <= '4')
            {
				inter[y*16 + x*4 +((int)hor[j] - 49)] = 1;
            }
          }
		  j++;
        }
		printf ("\n");
      }
      i++;
   }
}

int *allocate_inter(int *inter, int size)
{
	int i;
	
	inter = (int*)malloc(size * sizeof(int));
	while (i < size)
	{
		inter[i] = 0;
		i++;
	}
	return inter;
}

void print_inter(int *inter)
{
	for (int z=0; z < 4; z++)
	{
		for (int y=0; y < 4; y++)
		{
			for (int x=0; x < 4; x++)
			{
				printf ("%d", inter[z*16 + y*4 + x]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

void remove_hor_str(int *inter, char *hor, int y, int x)
{
	int i = 0;
	int j = 0;

	while (hor[i])
	{
		if (i % 5 == x && hor[i] != ' ')
		{
			
			if (inter[y*16 + x*4 +((int)hor[i] - 49)] == 0)
			{
				j = i - x;
				while (j < (i - x + 5))
				{
					hor[j] = ' ';
					j++;
				}
			}
		}
		i++;
	}
}

void remove_ver_str(int *inter, char *ver, int y, int x)
{
	int i = 0;
	int j = 0;

	while (ver[i])
	{
		printf ("i %d\n", i);
		if (i % 5 == y && ver[i] != ' ')
		{
			
			if (inter[y*16 + x*4 +((int)ver[i] - 49)] == 0)
			{
				j = i - y;
				while (j < (i - y + 5))
				{
					printf ("j %d\n", j);
					ver[j] = ' ';
					j++;
				}
			}
		}
		i++;
	}
}

char	**allocate_strings(char **posib, int length)
{
	int	i;
	int	j;

	j = 0;
	posib = (char **)malloc(8 * sizeof(char *));
	while (j < 8)
	{
		posib[j] = (char *)malloc((length + 1) * sizeof(char));
		i = 0;
		while (i < length)
		{
			posib[j][i] = ' ';
			i++;
		}
		posib[j][i] = '\0';
		j++;
	}
	return (posib);
}

char	*cpy_str(char *dst, char *src)
{
	int	i;

	i = 0;
	while (dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = ' ';
	dst[i + 1] = '\0';
	return (dst);
}

char	**init_strings(char **str, int nb, int l, int r)
{
	if (l == 4 && r == 1)
		str[nb] = cpy_str(str[nb], "1234 ");
	if (l == 3 && r == 2)
		str[nb] = cpy_str(str[nb], "1243 1342 2341 ");
	if (l == 3 && r == 1)
		str[nb] = cpy_str(str[nb], "1324 2134 2314 ");
	if (l == 2 && r == 2)
		str[nb] = cpy_str(str[nb], "1423 2143 2413 3142 3241 4312 ");
	if (l == 2 && r == 3)
		str[nb] = cpy_str(str[nb], "1432 2431 3421 ");
	if (l == 2 && r == 1)
		str[nb] = cpy_str(str[nb], "3124 3214 ");
	if (l == 1 && r == 2)
		str[nb] = cpy_str(str[nb], "4123 4213 ");
	if (l == 1 && r == 3)
		str[nb] = cpy_str(str[nb], "4132 4231 4312 ");
	if (l == 1 && r == 4)
		str[nb] = cpy_str(str[nb], "4321 ");
	return (str);
}

int main(int argc, char **argv)
{
  int *inter;
  char **posib;
  
  inter = allocate_inter(inter, 64);
  posib = allocate_strings(posib, 30);

  char hor[] = "1243 1342 2341";
  char ver[] = "1423 2143 2413 3142 3241 3412";
  int y = 1;
  int x = 2;
  
  find_intersections(inter, hor, ver, y, x);
  printf ("\n");
  print_inter(inter);
  printf ("\n");
  remove_ver_str(inter, ver, y, x);
  remove_hor_str(inter, hor, y, x);
  printf ("%s\n", hor);
  printf ("%s\n", ver);
  free(inter);
}
