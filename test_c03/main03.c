/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:05:38 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/29 23:27:54 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex03/ft_strncat.c"
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
	str2 = "12345678";
	printf(CYN "-- Comprobando ex02:" RESET "\n");
	printf(YEL "    str1: " RESET "\"%s\"\n", str1);
	printf(YEL "    str2: " RESET "\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strcat(str1, str2, 4));'\n" RESET);
	r1 = ft_strncat(str1, str2, 4);
	printf(YEL "    Resultado 1: " RESET "%s\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	str2 = "1234";
	printf(BLU "    Ejecutando línea " GRN "'r1 = strncat(str1, str2);'\n" RESET);
	r1 = strncat(str1, str2, 4);
	printf(YEL "    Resultado esperado 1: " RESET "%s\n", r1);
	printf(BLU "\n    Modificando "YEL"str2\n" RESET);
	str2 = "abc";
	printf("\n");
	printf(YEL "    str1: " RESET "\"%s\"\n", str1);
	printf(YEL "    str2: " RESET "\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strncat(str1, str2, 5));'\n" RESET);
	r1 = ft_strncat(str1, str2, 5);
	printf(YEL "    Resultado 2: " RESET "%s\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "123456");
	printf(BLU "    Ejecutando línea " GRN "'r1 = strncat(str1, str2, 5);'\n" RESET);
	r1 = strncat(str1, str2, 5);
	printf(YEL "    Resultado esperado 2: " RESET "%s\n", r1);
	printf("\n");
}
