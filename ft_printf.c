/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:11:33 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/05 22:03:27 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_main_string(const char *str, t_apoio *ap)
{
	ap->i = 0;
	while (str[ap->i])
	{
		if (str[ap->i] != '%')
			ft_putchar(str[ap->i], ap);
		else
		{
			if (str[ap->i + 1] == '%')
			{
				ap->i++;
				ft_putchar(str[ap->i], ap);
			}
			else
				ft_check_flags_main(str, ap);
		}
		ap->i++;
	}
}

void	ft_putchar(char c, t_apoio *ap)
{
	write(1, &c, 1);
	ap->ret++;
}

int		ft_printf(const char *format, ...)
{
	t_apoio ap;

	ap.ret = 0;
	va_start(ap.list, format);
	ft_check_main_string(format, &ap);
	va_end(ap.list);
	return (ap.ret);
}
