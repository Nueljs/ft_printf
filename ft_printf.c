/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:47:16 by macerver          #+#    #+#             */
/*   Updated: 2025/12/07 12:43:16 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_type(char c, va_list *args)
{
	int	len;

	len = 0;
	if (c == 'c')
		return (len + ft_putchar_fd((char)va_arg(*args, int), 1));
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
		return (len + hex_nlower(va_arg(*args,unsigned int)));
	else if (c == 'X')
		return (len + hex_nupper(va_arg(*args,unsigned int)));
	else
		ft_putchar_fd('%', 1);
	return (len);
	
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
			len += find_type(str[++i], &args);
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	return (len + ft_strlen(str));
}

int	main(void)
{
	void	*p;
	
	// ft_printf("%u", -62);
	// printf("%d",printf("%p eeeeeeeeeeeeeeeeeee", p));
	// ft_printf("%p", p);
	// printf("%x\n", 82);
	// ft_printf("%x", 82);
	// printf("%x\n", -46546);
	// printf("%x\n", -1);
	printf("%d\n", printf("Mi numero es: %x", -1));
	printf("%d\n", ft_printf("Mi numero es: %x", -1));
	printf("%d\n", printf("Mi numero es: %X", -1));
	printf("%d\n", ft_printf("Mi numero es: %X", -1));
	printf("%d\n", printf("Mi char es: %c", 'p'));
	printf("%d\n", ft_printf("Mi char es: %c", 'p'));
	// write(1, "\n", 1);
	// ft_printf("%x", -46546);
	// ft_printf(" %c", '0');
	
	// return 0;
}

