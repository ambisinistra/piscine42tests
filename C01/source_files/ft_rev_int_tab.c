#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:43:14 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/19 16:16:56 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i <= (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

int main(void)
{
	int tab_5[5] = {0,1,2,3,4};

	ft_rev_int_tab(tab_5, 5);
	for (int i = 0; i < 5; i++)
	{
		printf ("%d, ", tab_5[i]);
	}
	printf(" ");

	int tab_4[4] = {0,1,2,3};
	ft_rev_int_tab(tab_4, 4);
	for (int i = 0; i < 4; i++)
	{
		printf ("%d, ", tab_4[i]);
	}
	return 0;
}
