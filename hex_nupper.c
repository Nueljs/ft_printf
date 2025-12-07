/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_nupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 06:01:01 by macerver          #+#    #+#             */
/*   Updated: 2025/12/07 12:26:02 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_nupper(unsigned int	n)
{
	long		num;
	char		c;
	char		*hex;
	static int	len;

	len = 0;
	hex = "0123456789ABCDEF";
	num = n;
	if (num >= 16)
		hex_nupper(num / 16);
	c = hex[num % 16];
	write(1, &c, 1);
	return (++len);
}