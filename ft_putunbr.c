/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 05:42:58 by macerver          #+#    #+#             */
/*   Updated: 2025/12/03 05:58:57 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
		num = -num;
	if (num >= 10)
		ft_putunbr_fd(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}