/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pvoid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:52:18 by macerver          #+#    #+#             */
/*   Updated: 2025/12/08 12:06:28 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pvoid(void *p)
{
	unsigned long long	ptr;

	ptr = (unsigned long) p;
	if (!p)
		return (write(1, "(nil)", 5));
	return (ft_putstr_fd("0x") + hex_nlower(ptr));
}
