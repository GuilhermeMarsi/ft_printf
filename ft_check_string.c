/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 20:48:04 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/11 19:09:03 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_check_string(const char *str, t_apoio *ap, t_flags *flags)
{
	char *swap;

	ap->j = 0;
	if (str[ap->i] == 's')
	{
		swap = va_arg(ap->list, char*);
		if (flags->prec > ft_strlen(swap))
			flags->prec = ft_strlen(swap);
		if (flags->width <= flags->prec)
			flags->width = 0;
		else
			flags->width -= flags->prec;
		if (flags->prec < 0)
			flags->width -= 1;
		if (flags->minus == '-' && flags->prec >= 0)
		{
			while (ap->j < flags->prec)
				ft_putchar(swap[ap->j++], ap);
			while (ap->j < flags->prec + flags->width)
			{
				ft_putchar(' ', ap);
				ap->j++;
			}
		}
		else if (flags->minus == '-' && flags->prec < 0)
		{
			while (swap[ap->j])
				ft_putchar(swap[ap->j++], ap);
			ap->j = 0;
			while (ap->j < flags->width - ft_strlen(swap))
			{
				ft_putchar(' ', ap);
				ap->j++;
			}
		}
		else if (flags->minus != '-' && flags->prec >= 0)
		{
			while (ap->j < flags->width)
			{
				ft_putchar(' ', ap);
				ap->j++;
			}
			ap->j = 0;
			while (ap->j < flags->prec)
				ft_putchar(swap[ap->j++], ap);
		}
		else if (flags->minus != '-' && flags->prec < 0)
		{
			while (ap->j < flags->width - ft_strlen(swap))
			{
				ft_putchar(' ', ap);
				ap->j++;
			}
			ap->j = 0;
			while (swap[ap->j])
				ft_putchar(swap[ap->j++], ap);
		}
	}
}
