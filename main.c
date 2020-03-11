/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:59:43 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/10 22:31:43 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
//	char *txt = "Teste de String sem mais argumentos\n";
	int num1;
	int num2;
//	int n = 123;
//	char c1 = 's';
//	char c2 = 's';
	char *s1 = "TESTE";
	char *s2 = "TESTE";

	num1 = printf("Teste de String sem mai%4s argumento%7.5s.\n", s1,  s1);
	num2 = ft_printf("Teste de String sem mai%4s argumento%7.5s.\n", s2,  s2);
	printf("\n");
	printf(">> Retorno da original: %d\n>> Retorno da minha: %d\n", num1, num2);
	return (0);
}

/*
** Para o %c as FLAGS que se aplicam são '-' e Width;
** Para o %s as FLAGS que se aplicam são '-', Width e Precision;
*/
