/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:00:12 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/04 21:35:00 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
** ----- BIBLIOTECAS -----
*/

//# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

/*
** ----- ESTRUTURA ------
*/

typedef	struct	s_flags
{
	char		minus;
	char		zero;
	int			width;
	int			prec;
}				t_flags;

typedef	struct	s_apoio
{
	va_list		list;
	int			i;
	int			j;
	int			ret;
}				t_apoio;

/*
** ----- FUNCOES ---------
*/

int				ft_printf(const char *format, ...);
void			ft_putchar(char c, t_apoio *ap);
void			ft_check_string(const char *str, t_apoio *ap);
void			ft_check_flags_1(const char *str, t_apoio *ap);
void			ft_check_flags_2(const char *str, t_apoio *ap, t_flags *flags);
int				ft_isdigit(int c);
void			ft_restart_flags(t_flags *flags);
void			ft_check_specifiers(const char *str, t_apoio *ap);

#endif
