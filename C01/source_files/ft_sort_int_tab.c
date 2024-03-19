#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:13:22 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/19 16:21:05 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	one_sort_run(int *tab, int start_index, int pivot_index)
{
	int	i;
	int	tmp;

	i = start_index;
	while (i < pivot_index)
	{
		while (tab[i] > tab[pivot_index])
		{	
			tmp = tab[pivot_index];
			tab[pivot_index] = tab[i];
			tab[i] = tab[pivot_index - 1];
			tab[pivot_index - 1] = tmp;
			pivot_index --;
		}
		i++;
	}
	return (pivot_index);
}

void	quick_sort(int *tab, int start_index, int end_index)
{
	int	separator;

	if ((end_index - start_index) > 0)
	{
		separator = one_sort_run(tab, start_index, end_index);
		quick_sort(tab, start_index, separator - 1);
		quick_sort(tab, separator + 1, end_index);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	quick_sort(tab, 0, size - 1);
}

int main(void)
{
	int tab[10] = {2, 1, 8, 9, 0, 3, 5, 4, 7, 6};

	ft_sort_int_tab(tab, 10);
	for (int i = 0; i < 10; i++)
	{
		printf ("%d", tab[i]);
	}
	printf ("\n");
	return 0;
}
