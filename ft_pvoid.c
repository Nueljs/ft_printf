/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pvoid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:52:18 by macerver          #+#    #+#             */
/*   Updated: 2025/12/05 06:24:42 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pvoid(void *p)
{
	char	*hex;
	char	c;
	
	hex = "0123456789abcdef";
	if ((unsigned long long)p >= 16)
	ft_pvoid((void *)((unsigned long long)p / 16));
	c = hex[(unsigned long long)p % 16];
	write(1, &c, 1);
}
