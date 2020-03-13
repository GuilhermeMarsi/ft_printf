/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:59:43 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/12 21:45:31 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
//	char *txt = "Teste de String sem mais argumentos\n";
	int num1;
	int num2;
	unsigned int n = 1234567891;
//	char c1 = 's';
//	char c2 = 's';
//	char *s1 = "TESTE";
//	char *s2 = "TESTE";

	num1 = printf("--> %x <--\n", n);
	num2 = ft_printf("--> %x <--\n", n);
	printf("\n");
	printf(">> Retorno da original: %d\n>> Retorno da minha: %d\n", num1, num2);
	return (0);
}

/*
** Para o %c as FLAGS que se aplicam são '-' e Width;
** Para o %s as FLAGS que se aplicam são '-', Width e Precision;
** Para o %x ou %X as FlAGS que se aplicam são '-' e Width;
*/
