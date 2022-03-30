/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:24:03 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/24 17:23:23 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_strcmp.c"
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

	str1 = "abcde";
	str2 = "abcde";
	printf(CYN "-- Comprobando ex00:" RESET "\n");
	printf(YEL"    str1: "RESET"\"%s\"\n", str1);
	printf(YEL"    str2: "RESET"\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea "GRN"'r1 = ft_strcmp(str1, str2);'\n"RESET);
	r1 = ft_strcmp(str1, str2);
	printf(YEL"    Resultado 1: "RESET"%i\n", r1);
	printf(BLU"    Ejecutando línea "GRN"'r1 = strcmp(str1, str2);'\n"RESET);
	r1 = strcmp(str1, str2);
	printf(YEL"    Resultado esperado 1: "RESET"%i\n", r1);
	printf(BLU"\n    Modificando "YEL"str1"BLU" y "YEL"str2\n"RESET);
	str1 = "123abc";
	str2 = "123456";
	printf(YEL"    str1: "RESET"\"%s\"\n", str1);
	printf(YEL"    str2: "RESET"\"%s\"\n\n", str2);
	printf(BLU"    Ejecutando línea "GRN"'r2 = ft_strcmp(str1, str2);'\n"RESET);
	r2 = ft_strcmp(str1, str2);
	printf(YEL"    Resultado 2: "RESET"%i\n", r2);
	printf(BLU"    Ejecutando línea "GRN"'r2 = strcmp(str1, str2);'\n"RESET);
	r2 = strcmp(str1, str2);
	printf(YEL"    Resultado esperado 2: "RESET"%i\n", r2);
	printf(BLU"    Ejecutando línea "GRN"'r3 = ft_strcmp(str2, str1);'\n"RESET);
	r3 = ft_strcmp(str2, str1);
	printf(YEL"    Resultado 3: "RESET"%i\n", r3);
	printf(BLU"    Ejecutando línea "GRN"'r3 = strcmp(str2, str1);'\n"RESET);
	r3 = strcmp(str2, str1);
	printf(YEL"    Resultado esperado 3: "RESET"%i\n", r3);
	printf("\n");
}
