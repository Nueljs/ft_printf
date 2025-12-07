/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_nlower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 05:54:04 by macerver          #+#    #+#             */
/*   Updated: 2025/12/07 12:18:42 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_nlower(unsigned int	n)
{
	long			num;
	char			c;
	char			*hex;
	static int		len;

	hex = "0123456789abcdef";
	num = n;
	len = 0;
	if (num >= 16)
		hex_nlower(num / 16);
	c = hex[num % 16];
	write(1, &c, 1);
	return (++len);
}