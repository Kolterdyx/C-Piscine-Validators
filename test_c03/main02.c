/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:05:17 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/29 23:23:27 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_strcat.c"
#include "colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*r1;

	str1 = (char *)calloc(100, sizeof(char));
	str2 = "1234";
	printf(CYN "-- Comprobando ex02:" RESET "\n");
	printf(YEL "    str1: " RESET "\"%s\"\n", str1);
	printf(YEL "    str2: " RESET "\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strcat(str1, str2));'\n" RESET);
	r1 = ft_strcat(str1, str2);
	printf(YEL "    Resultado 1: " RESET "%s\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	str2 = "1234";
	printf(BLU "    Ejecutando línea " GRN "'r1 = strcat(str1, str2);'\n" RESET);
	r1 = strcat(str1, str2);
	printf(YEL "    Resultado esperado 1: " RESET "%s\n", r1);
	printf(BLU "\n    Modificando "YEL"str2\n" RESET);
	str2 = "abcdef";
	printf("\n");
	printf(YEL "    str1: " RESET "\"%s\"\n", str1);
	printf(YEL "    str2: " RESET "\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strcat(str1, str2));'\n" RESET);
	r1 = ft_strcat(str1, str2);
	printf(YEL "    Resultado 2: " RESET "%s\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "1234");
	printf(BLU "    Ejecutando línea " GRN "'r1 = strcat(str1, str2);'\n" RESET);
	r1 = strcat(str1, str2);
	printf(YEL "    Resultado esperado 2: " RESET "%s\n", r1);
	printf("\n");
}
