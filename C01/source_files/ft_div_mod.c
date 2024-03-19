#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:17:42 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/19 11:17:48 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 10;
	int b = 3;
	int div_ = 0;
	int mod_ = 0;
	ft_div_mod(a, b, &div_, &mod_);
	printf ("result of division %d on %d will be %d with mod %d", a, b, div_, mod_);
	return 0;
}
