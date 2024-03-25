/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersections.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:32:09 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/24 21:19:11 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	remove_hor_str(int *inter, char *hor, int y, int x);
void	remove_ver_str(int *inter, char *ver, int y, int x);
char	*cpy_str(char *dst, char *src);
char	**init_str(char **str, int nb, int l, int r);
void	read_args(char *nums, char **posib);
int		check_input(char *i_str);
int		check_output(char **posib);
void	write_output(char **posib, int i, int x, int counter);

int	*init_with_zeros(int *inter, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		inter[i] = 0;
		i++;
	}
	return (inter);
}

char	**allocate_strings(char **posib, int length)
{
	int	i;
	int	j;

	j = 0;
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

// horisontal line = posib[4 + y]
// vertical line = posib[x]
void	find_intersections(int *inter, char **posib, int y, int x)
{
	int	i;
	int	j;

	i = 0;
	while (posib[x][i])
	{
		if (i % 5 == y)
		{
			j = 0;
			while (posib[4 + y][j])
			{
				if (j % 5 == x)
				{
					if (posib[x][i] == posib[4 + y][j] && posib[x][i] >= '1'
						&& posib[x][i] <= '4')
					{
						inter[y * 16 + x * 4 + ((int)posib[4 + y][j] - 49)] = 1;
					}
				}
				j++;
			}
		}
		i++;
	}
}

void	check_all_intersections(int *inter, char **posib, int y, int x)
{
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			find_intersections(inter, posib, y, x);
			remove_hor_str(inter, posib[4 + y], y, x);
			remove_ver_str(inter, posib[x], y, x);
			x++;
		}
		y++;
	}
}

int	main(int argc, char **argv)
{
	int		*inter;
	char	**posib;

	if (argc != 2 || check_input(argv[1]) != 31)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	inter = (int *)malloc(64 * sizeof(int));
	inter = init_with_zeros(inter, 64);
	posib = (char **)malloc(8 * sizeof(char *));
	posib = allocate_strings(posib, 32);
	read_args(argv[1], posib);
	check_all_intersections(inter, posib, 0, 0);
	if (check_output(posib) != 8)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	write_output(posib, 0, 0, 0);
	return (0);
}
