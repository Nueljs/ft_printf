/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:05:45 by macerver          #+#    #+#             */
/*   Updated: 2025/12/08 12:13:46 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;
	int		len;

	len = count_digits((long) n);
	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
	return (len);
}

// int	main(void){
// 	ft_putnbr_fd(-324, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(75, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(64646512, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(21, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);
// }