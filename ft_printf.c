/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:47:16 by macerver          #+#    #+#             */
/*   Updated: 2025/12/11 11:59:49 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	find_type(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_pvoid(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_putunbr_fd(va_arg(args, unsigned int), 1));
	else if (c == 'x')
		return (hex_nlower(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (hex_nupper(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar_fd('%'));
	return (ft_putchar_fd('%') + ft_putchar_fd(c));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			len += find_type(str[i], args);
		}
		else
			len += ft_putchar_fd(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
// 	void	*p;

// 	// ft_printf("%u", -62);
// 	// printf("%d",printf("%p eeeeeeeeeeeeeeeeeee", p));
// 	// ft_printf("%p", p);
// 	// printf("%x\n", 82);
// 	// ft_printf("%x", 82);
// 	// printf("%x\n", -46546);
// 	// printf("%x\n", -1);
// 	// printf("%d\n", printf("Mi numero es: %x", -1));
// 	// printf("%d\n", ft_printf("Mi numero es: %x", -1));
// 	// printf("%d\n", printf("Mi numero es: %X", -1));
// 	// printf("%d\n", ft_printf("Mi numero es: %X", -1));
// 	// printf("%d\n", printf("Mi char es: %c", 'p'));
// 	// printf("%d\n", ft_printf("Mi char es: %c", 'p'));
// 	// printf("%d\n", printf("%r", 'p'));
//     // printf("%d\n", printf("%r", 'p'));
//     // printf("%d\n", ft_printf("%r", 'p'));
// 	printf("%d\n", printf("hola%"));
//     printf("%d\n", ft_printf("HOLA%"));
// 	// printf("%d\n", ft_printf("%r", 'p'));
// 	// write(1, "\n", 1);
// 	// ft_printf("%x", -46546);
// 	// ft_printf(" %c", '0');

// 	// return 0;
// }