/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprieto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:05:42 by fprieto-          #+#    #+#             */
/*   Updated: 2023/11/12 22:38:34 by fprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// It builds a matrix with the input dimensions and fills it with the right char
void	rush(int x, int y)
{
	int	hp;
	int	vp;

	hp = 1;
	vp = 1;
	while (hp <= y)
	{
		while (vp <= x)
		{
			if ((hp == 1 || hp == y) && (vp == 1 || vp == x))
				ft_putchar (111);
			else if (hp == 1 || hp == y)
				ft_putchar (45);
			else if (vp == 1 || vp == x)
				ft_putchar (124);
			else
				ft_putchar (32);
			vp++;
		}
		write(1, "\n", 2);
		hp++;
		vp = 1;
	}
}
