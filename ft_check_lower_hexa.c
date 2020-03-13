/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:25:46 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/12 21:45:34 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_mend_and_print(t_apoio *ap)
{
	if (ap->j == ap->div)
	{
		ap->resto = ap->resto > 9 ? ap->resto + 87 : ap->resto + 48;
		ap->num_ap = ap->num_ap > 9 ? ap->num_ap + 87 : ap->num_ap + 48;
		ft_putchar(ap->num_ap, ap);
		ft_putchar(ap->resto, ap);	
	}
	else
	{
		ap->resto = ap->resto > 9 ? ap->resto + 87 : ap->resto + 48;
		ft_putchar(ap->resto, ap);	
	}
}

void	ft_calculate_hexa(t_apoio *ap)
{
	ap->n = 0;
	ap->num_ap = ap->num;
	ap->resto = ap->num;
	while (ap->n++ < ap->j)
	{
		ap->resto = ap->num_ap % 16;
		ap->num_ap /= 16;
	}
	ft_mend_and_print(ap);
	ap->j--;
}

void	ft_check_lower_hexa(const char *str, t_apoio *ap, t_flags *flags)
{
	flags->minus = '-'; //REMOVER//
	ap->j = 0;
	if (str[ap->i] == 'x')
	{
		ap->num = va_arg(ap->list, unsigned int);
		ap->n = ap->num;
		while ((ap->n /= 16) > 0)
			ap->j++;
		ap->div = ap->j;
		while (ap->j > 0)
			ft_calculate_hexa(ap);
	}
}
