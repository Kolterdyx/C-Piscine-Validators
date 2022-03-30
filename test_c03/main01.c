/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:09:54 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/29 23:02:07 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/ft_strncmp.c"
#include "colors.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		r1;
	int		r2;
	int		r3;
	int		r4;

	str1 = "abcde";
	str2 = "abcde";
	printf(CYN "-- Comprobando ex01:" RESET "\n");
	printf(YEL"    str1: "RESET"\"%s\"\n", str1);
	printf(YEL"    str2: "RESET"\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea "GRN"'r1 = ft_strncmp(str1, str2, 3);'\n"RESET);
	r1 = ft_strncmp(str1, str2, 3);
	printf(YEL"    Resultado 1: "RESET"%i\n", r1);
	printf(BLU"    Ejecutando línea "GRN"'r1 = strncmp(str1, str2, 3);'\n"RESET);
	r1 = strncmp(str1, str2, 3);
	printf(YEL"    Resultado esperado 1: "RESET"%i\n", r1);
	printf(BLU"\n    Modificando "YEL"str1"BLU" y "YEL"str2\n"RESET);
	str1 = "123abc";
	str2 = "123456";
	printf(YEL"    str1: "RESET"\"%s\"\n", str1);
	printf(YEL"    str2: "RESET"\"%s\"\n\n", str2);
	printf(BLU"    Ejecutando línea "GRN"'r2 = ft_strncmp(str1, str2, 4);'\n"RESET);
	r2 = ft_strncmp(str1, str2, 4);
	printf(YEL"    Resultado 2: "RESET"%i\n", r2);
	printf(BLU"    Ejecutando línea "GRN"'r2 = strncmp(str1, str2, 4);'\n"RESET);
	r2 = strncmp(str1, str2, 4);
	printf(YEL"    Resultado esperado 2: "RESET"%i\n", r2);
	printf(BLU"    Ejecutando línea "GRN"'r3 = ft_strncmp(str2, str1, 5);'\n"RESET);
	r3 = ft_strncmp(str2, str1, 5);
	printf(YEL"    Resultado 3: "RESET"%i\n", r3);
	printf(BLU"    Ejecutando línea "GRN"'r3 = strncmp(str2, str1, 5);'\n"RESET);
	r3 = strncmp(str2, str1, 5);
	printf(YEL"    Resultado esperado 3: "RESET"%i\n", r3);
	printf(BLU"    Ejecutando línea "GRN"'r4 = ft_strncmp(str2, str1, 3);'\n"RESET);
	r4 = ft_strncmp(str2, str1, 3);
	printf(YEL"    Resultado 4: "RESET"%i\n", r4);
	printf(BLU"    Ejecutando línea "GRN"'r4 = strncmp(str2, str1, 3);'\n"RESET);
	r4 = strncmp(str2, str1, 3);
	printf(YEL"    Resultado esperado 4: "RESET"%i\n", r4);
	printf("\n");
}
