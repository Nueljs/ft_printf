/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_nlower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 05:54:04 by macerver          #+#    #+#             */
/*   Updated: 2025/12/05 06:24:31 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_nlower(int	n)
{
	long	num;
	char	c;
	char	*hex;

	hex = "0123456789abcdef";
	num = n;
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num >= 16)
		hex_nlower(num / 16);
	c = hex[num % 16];
	write(1, &c, 1);
}