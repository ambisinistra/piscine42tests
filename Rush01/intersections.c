#include <stdio.h>
#include <stdlib.h>

void find_intersections(int *inter, char *hor, char *ver, int y, int x)
{
   int i = 0;
   int j = 0;
   
   while (ver[i])
   {
	  printf ("i %d %s\n", i, ver);
      if (i % 5 == y)
      {
        while (hor[j])
        {
		  printf ("j %d %s\n", j, hor);
          if (j % 5 == x)
          {
            if (ver[i] == hor[j])
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

void print_array(int *inter)
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

int main()
{
  int *inter;
  
  char hor[] = "1243 1342 2341";
  char ver[] = "1423 2143 2413 3142 3241 3412";
  int y = 1;
  int x = 2;

  inter = allocate_inter(inter, 64);
  find_intersections(inter, hor, ver, y, x);
  printf ("\n");
  print_array(inter);
}
