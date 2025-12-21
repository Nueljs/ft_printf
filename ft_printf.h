/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:20:30 by macerver          #+#    #+#             */
/*   Updated: 2025/12/21 17:52:28 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putunbr(unsigned long n, int fd);
int		ft_pvoid(void *p);
int		hex_nupper(unsigned long n);
int		hex_nlower(unsigned long n);

#endif