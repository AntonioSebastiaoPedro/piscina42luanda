/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:31:09 by ansebast          #+#    #+#             */
/*   Updated: 2024/02/06 21:53:23 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int nb1, int nb2)
{
	ft_putchar(nb1 / 10 + '0');
	ft_putchar(nb1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(nb2 / 10 + '0');
	ft_putchar(nb2 % 10 + '0');
	if ((nb1 / 10 != 9) || (nb1 % 10 != 8))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_print_comb(num1, num2);
			num2++;
		}
		num1++;
	}
}
