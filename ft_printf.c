/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:47:16 by macerver          #+#    #+#             */
/*   Updated: 2025/11/29 15:01:50 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		params;
	char	types[9];

	*types = "cspdiuxX%";

	i = 0;
	params = 0;
	va_start(args, str);
	while (params < args)
	{
		while (str[i])
		{
			if (str[i] == '%' && str[i + 1])
		}
	}
}

