/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:00:12 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/05 22:03:36 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
** ----- BIBLIOTECAS -----
*/

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

/*
** ----- ESTRUTURAS ------
*/

typedef	struct	s_flags
{
	char		minus;
	char		zero;
	size_t		width;
	size_t		prec;
}				t_flags;

typedef	struct	s_apoio
{
	va_list		list;
	int			i;
	size_t		j;
	int			ret;
}				t_apoio;

/*
** ----- FUNCOES ---------
*/

int				ft_printf(const char *format, ...);
int				ft_isdigit(int c);
char			*ft_itoa(int n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *str);
void			ft_putchar(char c, t_apoio *ap);
void			ft_check_main_string(const char *str, t_apoio *ap);
void			ft_check_flags_main(const char *str, t_apoio *ap);
void			ft_restart_flags(t_flags *flags);
void			ft_check_flags_1(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_flags_2(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_flags_3(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_char(const char *str, t_apoio *ap, t_flags *flags);
int				ft_check_string(const char *str, t_apoio *ap, t_flags *flags);

#endif
