/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_nupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 06:01:01 by macerver          #+#    #+#             */
/*   Updated: 2025/12/05 06:24:16 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_nupper(int	n)
{
	long	num;
	char	c;
	char	*hex;

	hex = "0123456789ABCDEF";
	num = n;
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num >= 16)
		hex_nupper(num / 16);
	c = hex[num % 16];
	write(1, &c, 1);
}