/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifiers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 21:59:47 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/11 19:43:43 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_char(const char *str, t_apoio *ap, t_flags *flags)
{
	ap->j = 1;
	if (str[ap->i] == 'c')
	{
		if (flags->minus == '-' && flags->width > 0)
		{
			ft_putchar(va_arg(ap->list, int), ap);
			while (ap->j++ < flags->width)
				ft_putchar(' ', ap);
		}
		else if (flags->minus != '-' && flags->width > 0)
		{
			while (ap->j++ < flags->width)
				ft_putchar(' ', ap);
			ft_putchar(va_arg(ap->list, int), ap);
		}
		else
			ft_putchar(va_arg(ap->list, int), ap);
	}
}
