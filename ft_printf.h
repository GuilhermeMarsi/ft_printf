/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:00:12 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/11 19:35:39 by gmarsi           ###   ########.fr       */
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
	long		width;
	long		prec;
}				t_flags;

typedef	struct	s_apoio
{
	va_list		list;
	int			i;
	long		j;
	int			ret;
}				t_apoio;

/*
** ----- FUNCOES ---------
*/

int				ft_printf(const char *format, ...);
int				ft_isdigit(int c);
char			*ft_itoa(int n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
long			ft_strlen(const char *str);
void			ft_putchar(char c, t_apoio *ap);
int				ft_check_main_string(const char *str, t_apoio *ap);
void			ft_check_flags_main(const char *str, t_apoio *ap);
void			ft_restart_flags(t_flags *flags);
void			ft_check_flags_1(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_flags_2(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_flags_3(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_char(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_string(const char *str, t_apoio *ap, t_flags *flags);
void			ft_check_string_a(t_apoio *ap, t_flags *flags, char *swap);
void			ft_check_string_b(t_apoio *ap, t_flags *flags, char *swap);
void			ft_check_string_c(t_apoio *ap, t_flags *flags, char *swap);
void			ft_check_string_d(t_apoio *ap, t_flags *flags, char *swap);

#endif
