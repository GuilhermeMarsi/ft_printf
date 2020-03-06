/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:13:06 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/05 22:03:29 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_flags_3(const char *str, t_apoio *ap, t_flags *flags)
{
	ap->i = str[ap->i] == '.' ? ap->i++ : ap->i;
	if (str[ap->i] == '*')
	{
		flags->prec = va_arg(ap->list, int);
		ap->i++;
	}
	else
	{
		while (ft_isdigit(str[ap->i]))
		{
			flags->prec = flags->prec + (str[ap->i] - 48);
			if (ft_isdigit(str[ap->i + 1]))
				flags->prec *= 10;
			ap->i++;
		}
	}
}

void	ft_check_flags_2(const char *str, t_apoio *ap, t_flags *flags)
{
	if (str[ap->i] == '*')
	{
		flags->width = va_arg(ap->list, int);
		ap->i++;
	}
	else
	{
		while (ft_isdigit(str[ap->i]))
		{
			flags->width = flags->width + (str[ap->i] - 48);
			if (ft_isdigit(str[ap->i + 1]))
				flags->width *= 10;
			ap->i++;
		}
	}
}

void	ft_check_flags_1(const char *str, t_apoio *ap, t_flags *flags)
{
	while (str[ap->i] == '-')
	{
		flags->minus = '-';
		ap->i++;
	}
	while (str[ap->i] == '0')
	{
		flags->zero = 48;
		ap->i++;
	}
}

void	ft_check_flags_main(const char *str, t_apoio *ap)
{
	t_flags	flags;

	ap->i++;
	ft_restart_flags(&flags);
	ft_check_flags_1(str, ap, &flags);
	ft_check_flags_2(str, ap, &flags);
	ft_check_flags_3(str, ap, &flags);
	ft_check_char(str, ap, &flags);
	ft_check_string(str, ap, &flags);
}
