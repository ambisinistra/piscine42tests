/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocess.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoma <mpoma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:24:25 by mpoma             #+#    #+#             */
/*   Updated: 2024/03/24 21:22:39 by mpoma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*cpy_str(char *dst, char *src);

char	**init_str(char **str, int nb, int l, int r)
{
	if (l == 4 && r == 1)
		str[nb] = cpy_str(str[nb], "1234 ");
	if (l == 3 && r == 2)
		str[nb] = cpy_str(str[nb], "1243 1342 2341 ");
	if (l == 3 && r == 1)
		str[nb] = cpy_str(str[nb], "1324 2134 2314 ");
	if (l == 2 && r == 2)
		str[nb] = cpy_str(str[nb], "1423 2143 2413 3142 3241 3412 ");
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

void	read_args(char *nums, char **posib)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		init_str(posib, i / 2, (int)nums[i] - 48, (int)nums[i + 8] - 48);
		i += 2;
	}
	i += 8;
	while (i < 24)
	{
		init_str(posib, (i - 8) / 2, (int)nums[i] - 48, (int)nums[i + 8] - 48);
		i += 2;
	}
}

int	check_input(char	*i_str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i_str[i])
	{
		if (i % 2 == 0 && i_str[i] >= '1' && i_str[i] <= '4')
			counter++;
		if (i % 2 == 1 && i_str[i] == ' ')
			counter++;
		i++;
	}
	return (counter);
}
