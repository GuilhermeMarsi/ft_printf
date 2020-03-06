/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 20:48:04 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/05 22:03:38 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_string(const char *str, t_apoio *ap, t_flags *flags)
{
	char *s;

	if (str[ap->i] == 's')
	{
		if (flags->prec > ft_strlen(str))
			flags->prec = ft_strlen(str);
		if (flags->width <= flags->prec)
			flags->width = 0;
		else
			flags->width -= flags->prec;
		if(!(s = (char*)malloc(sizeof(char) * (flags->width + flags->prec + 1))))
			return (0);
	}




//	ap->j = 0;
//	if (str[ap->i] == 's')
//	{
//		s = va_arg(ap->list, char*);
//		while (s[ap->j])
//		{
//			ft_putchar(s[ap->j], ap);
//			ap->j++;
//		}
//	}
	return (1);
}
