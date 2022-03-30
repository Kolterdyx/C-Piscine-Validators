/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:05:43 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/30 00:50:01 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_strstr.c"
#include "colors.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*r1;
	char	*r2;
	char	*r3;

	str1 = "abcde";
	str2 = "bc";
	printf(CYN "-- Comprobando ex04:" RESET "\n");
	printf(YEL"    str1: "RESET"\"%s\"\n", str1);
	printf(YEL"    str2: "RESET"\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea "GRN"'r1 = ft_strstr(str1, str3);'\n"RESET);
	r1 = ft_strstr(str1, str2);
	printf(YEL"    Resultado 1: "RESET"%s\n", r1);
	printf(BLU"    Ejecutando línea "GRN"'r1 = strstr(str1, str2);'\n"RESET);
	r1 = strstr(str1, str2);
	printf(YEL"    Resultado esperado 1: "RESET"%s\n", r1);
	printf(BLU"\n    Modificando "YEL"str1"BLU" y "YEL"str2\n"RESET);
	str1 = "234";
	str2 = "123456";
	printf(YEL"    str1: "RESET"\"%s\"\n", str1);
	printf(YEL"    str2: "RESET"\"%s\"\n\n", str2);
	printf(BLU"    Ejecutando línea "GRN"'r2 = ft_strstr(str1, str2);'\n"RESET);
	r2 = ft_strstr(str1, str2);
	printf(YEL"    Resultado 2: "RESET"%s\n", r2);
	printf(BLU"    Ejecutando línea "GRN"'r2 = strstr(str1, str2);'\n"RESET);
	r2 = strstr(str1, str2);
	printf(YEL"    Resultado esperado 2: "RESET"%s\n", r2);
	printf(BLU"    Ejecutando línea "GRN"'r3 = ft_strstr(str2, str1);'\n"RESET);
	r3 = ft_strstr(str2, str1);
	printf(YEL"    Resultado 3: "RESET"%s\n", r3);
	printf(BLU"    Ejecutando línea "GRN"'r3 = strstr(str2, str1);'\n"RESET);
	r3 = strstr(str2, str1);
	printf(YEL"    Resultado esperado 3: "RESET"%s\n", r3);
	printf("\n");
}
