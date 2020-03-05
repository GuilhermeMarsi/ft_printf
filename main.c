/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:59:43 by gmarsi            #+#    #+#             */
/*   Updated: 2020/03/04 21:35:13 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
//	char *txt = "Teste de String sem mais argumentos\n";
	int num1;
	int num2;

	num1 = printf("Teste de String sem mais argumentos\n");
	num2 = ft_printf("Teste de String sem mais argumentos\n");
	printf("\n");
	printf(">> Retorno da original: %d\n>> Retorno da minha: %d\n", num1, num2);
	return (0);
}
