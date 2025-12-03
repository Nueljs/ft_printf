/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:47:16 by macerver          #+#    #+#             */
/*   Updated: 2025/12/03 06:16:19 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	find_type(char c, va_list *args)
{
	if (c == 'c')
		ft_putchar_fd((char)va_arg(*args, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	// else if (c == 'p')
	// 	ft_pvoid(va_arg(*args, void *));
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(*args, int), 1);
	else if (c == 'u')
		ft_putunbr_fd(va_arg(*args, int), 1);
	
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			find_type(str[++i], &args);
		i++;
	}
}

int	main(void)
{
	ft_printf("%u", -62);
	return 0;
}

