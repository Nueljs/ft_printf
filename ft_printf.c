/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:47:16 by macerver          #+#    #+#             */
/*   Updated: 2025/12/05 06:25:04 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	find_type(char c, va_list *args)
{
	if (c == 'c')
		ft_putchar_fd((char)va_arg(*args, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	else if (c == 'p')
	{
		write(1, "0x",2);
		ft_pvoid(va_arg(*args, void *));
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(*args, int), 1);
	else if (c == 'u')
		ft_putunbr_fd(va_arg(*args, int), 1);
	else if (c == 'x')
		hex_nlower(va_arg(*args, int));
	else if (c == 'X')
		hex_nupper(va_arg(*args, int));
	else
		ft_putchar_fd('%', 1);
	
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
	return	(0);
}

// int	main(void)
// {
// 	void	*p;
	
// 	// ft_printf("%u", -62);
// 	printf("%p\n", p);
// 	ft_printf("%p", p);
// 	printf("%x\n", 82);
// 	ft_printf("%x", 82);
// 	printf("%x\n", -46546);
// 	ft_printf("%x", -46546);
	
// 	// return 0;
// }

