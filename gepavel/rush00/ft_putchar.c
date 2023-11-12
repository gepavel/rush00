/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanz-al <psanz-al@student.42madrid.comm>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:05:42 by psanz-al          #+#    #+#             */
/*   Updated: 2023/11/12 22:01:12 by fprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// It print the display received as input character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
