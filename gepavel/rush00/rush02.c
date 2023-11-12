/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprieto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:05:42 by fprieto-          #+#    #+#             */
/*   Updated: 2023/11/12 22:14:10 by fprieto-         ###   ########.fr       */
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
			if ((hp == 1 && vp == 1) || (hp == 1 && vp == x))
				ft_putchar (65);
			else if ((hp == y && vp == 1) || (hp == y && vp == x))
				ft_putchar (67);
			else if (hp == 1 || hp == y || vp == 1 || vp == x)
				ft_putchar (66);
			else
				ft_putchar (32);
			vp++;
		}
		write(1, "\n", 2);
		hp++;
		vp = 1;
	}
}
