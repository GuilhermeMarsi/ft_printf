/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 19:18:10 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/10 22:30:28 by gmarsi           ###   ########.fr       */
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
