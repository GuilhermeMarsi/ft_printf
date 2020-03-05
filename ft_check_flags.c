/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 19:13:06 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/04 21:35:06 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

void	ft_restart_flags(t_flags *flags)
{
	flags->minus = '\0';
	flags->zero = '\0';
	flags->width = 0;
	flags->prec = 0;
}

void	ft_check_flags_2(const char *str, t_apoio *ap, t_flags *flags)
{
	while (ft_isdigit(str[ap->i]))
	{
		flags->width = flags->width + (str[ap->i] - 48);
		if (ft_isdigit(str[ap->i + 1]))
			flags->width *= 10;
		ap->i++;
	}
	ap->i = str[ap->i] == '.' ? ap->i++ : ap->i;
	while (ft_isdigit(str[ap->i]))
	{
		flags->prec = flags->prec + (str[ap->i] - 48);
		if (ft_isdigit(str[ap->i + 1]))
			flags->prec *= 10;
		ap->i++;
	}
}

void	ft_check_flags_1(const char *str, t_apoio *ap)
{
	t_flags	flags;

	ap->i++;
	ft_restart_flags(&flags);
	while (str[ap->i] == '-')
	{
		flags.minus = '-';
		ap->i++;
	}
	while (str[ap->i] == '0')
	{
		flags.zero = 48;
		ap->i++;
	}
	ft_check_flags_2(str, ap, &flags);
	ft_check_specifiers(str, ap);
}
