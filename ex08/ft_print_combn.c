/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:47:59 by ansebast          #+#    #+#             */
/*   Updated: 2024/02/06 18:55:22 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *array, int size)
{
	int	i;
	int	is_increasing;

	i = 1;
	is_increasing = 1;
	while (i < size)
	{
		if (array[i - 1] >= array[i])
			is_increasing = 0;
		i++;
	}
	if (is_increasing)
	{
		i = 0;
		while (i < size)
			ft_putchar(array[i++] + '0');
		if (array[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	i = 0;
	while (i < 10)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
