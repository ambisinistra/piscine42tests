/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:27:39 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/24 21:21:18 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	remove_hor_str(int *inter, char *hor, int y, int x)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (hor[i])
	{
		if (i % 5 == x && hor[i] != ' ')
		{		
			if (inter[y * 16 + x * 4 +((int)hor[i] - 49)] == 0)
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

void	remove_ver_str(int *inter, char *ver, int y, int x)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ver[i])
	{
		if (i % 5 == y && ver[i] != ' ')
		{		
			if (inter[y * 16 + x * 4 +((int)ver[i] - 49)] == 0)
			{
				j = i - y;
				while (j < (i - y + 5))
				{
					ver[j] = ' ';
					j++;
				}
			}
		}
		i++;
	}
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

void	write_output(char **posib, int i, int x, int counter)
{
	while (i < 4)
	{
		i++;
	}
	while (i < 8)
	{
		x = 0;
		counter = 0;
		while (posib[i][x] == ' ')
		{
			x++;
		}
		while (posib[i][x] >= '1' && posib[i][x] <= '4')
		{
			write (1, &posib[i][x], 1);
			if (counter < 3)
				write (1, " ", 1);
			x++;
			counter++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	check_output(char **posib)
{
	int	i;
	int	j;
	int	counter;

	j = 0;
	counter = 0;
	while (j < 8)
	{
		i = 0;
		while (posib[j][i] == ' ')
			i++;
		if (posib[j][i] >= '1' && posib[j][i] <= '4')
			counter++;
		j++;
	}
	return (counter);
}
