#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:28:34 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/19 16:14:35 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_;
	int	mod_;

	div_ = *a / *b;
	mod_ = *a % *b;
	*a = div_;
	*b = mod_;
}

int main(void)
{
	int a = 10;
	int b = 3;
	
	int result_a = a;
	int result_b = b;

	ft_ultimate_div_mod(&result_a, &result_b);
	printf("result of division %d on %d will be %d with mod %d", a, b, result_a, result_b);
	return 0;
}
