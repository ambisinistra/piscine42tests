#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:01:39 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/19 16:17:31 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int i = 0;
	int *p_i = &i;
	int **p_p_i = &p_i;
	int ***p_p_p_i = &p_p_i;
	int ****p_p_p_p_i = &p_p_p_i;
	int *****p_p_p_p_p_i = &p_p_p_p_i;
	int ******p_p_p_p_p_p_i = &p_p_p_p_p_i;
	int *******p_p_p_p_p_p_p_i = &p_p_p_p_p_p_i;
	int ********p_p_p_p_p_p_p_p_i = &p_p_p_p_p_p_p_i;
	
	ft_ultimate_ft(&p_p_p_p_p_p_p_p_i);
	printf("%d", i);
}
