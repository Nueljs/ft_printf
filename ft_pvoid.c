/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pvoid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:52:18 by macerver          #+#    #+#             */
/*   Updated: 2025/12/04 18:50:14 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_pvoid(void *p)
{
	char	*hex;
	char	c;
	
	*hex = "0123456789abcdef";
	write(1, "0x", 2);
	if ((unsigned long long)p >= 16)
		ft_pvoid((unsigned long long)p / 16);
	c = hex[(int)p % 16];
	write(1, &c, 1);
}
