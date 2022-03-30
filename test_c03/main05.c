/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:05:47 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/30 02:31:28 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex05/ft_strlcat.c"
#include "colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		r1;

	str1 = (char *)calloc(100, sizeof(char));
	str2 = "1234";
	printf(CYN "-- Comprobando ex02:" RESET "\n");
	printf(YEL "    str1: " RESET "\"%s\"\n", str1);
	printf(YEL "    str2: " RESET "\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strlcat(str1, str2, 5));'\n" RESET);
	r1 = ft_strlcat(str1, str2, 5);
	printf(YEL "    Resultado 1: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	str2 = "1234";
	printf(BLU "    Ejecutando línea " GRN "'r1 = strlcat(str1, str2, 5);'\n" RESET);
	r1 = strlcat(str1, str2, 5);
	printf(YEL "    Resultado esperado 1: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "\n    Modificando "YEL"str2\n" RESET);
	str2 = "abcdef";
	printf("\n");
	printf(YEL "    str1: " RESET "\"%s\"\n", str1);
	printf(YEL "    str2: " RESET "\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strlcat(str1, str2, 4));'\n" RESET);
	r1 = ft_strlcat(str1, str2, 4);
	printf(YEL "    Resultado 2: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "1234");
	printf(BLU "    Ejecutando línea " GRN "'r1 = strlcat(str1, str2, 4);'\n" RESET);
	r1 = strlcat(str1, str2, 4);
	printf(YEL "    Resultado esperado 2: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "1234");
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strlcat(str1, str2, 8);'\n" RESET);
	r1 = ft_strlcat(str1, str2, 8);
	printf(YEL "    Resultado 3: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "1234");
	printf(BLU "    Ejecutando línea " GRN "'r1 = strlcat(str1, str2, 8);'\n" RESET);
	r1 = strlcat(str1, str2, 8);
	printf(YEL "    Resultado esperado 3: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "\n    Modificando "YEL"str1 "BLU"y "YEL"str2\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "hola");
	str2 = " buenas";
	printf("\n");
	printf(YEL "    str1: " RESET "\"%s\"\n", str1);
	printf(YEL "    str2: " RESET "\"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strlcat(str1, str2, 12));'\n" RESET);
	r1 = ft_strlcat(str1, str2, 12);
	printf(YEL "    Resultado 2: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "hola");
	printf(BLU "    Ejecutando línea " GRN "'r1 = strlcat(str1, str2, 12);'\n" RESET);
	r1 = strlcat(str1, str2, 12);
	printf(YEL "    Resultado esperado 2: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "hola");
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strlcat(str1, str2, 11);'\n" RESET);
	r1 = ft_strlcat(str1, str2, 11);
	printf(YEL "    Resultado 3: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf(BLU "    Restableciendo valores\n" RESET);
	free(str1);
	str1 = (char *)calloc(100, sizeof(char));
	strcat(str1, "hola");
	printf(BLU "    Ejecutando línea " GRN "'r1 = strlcat(str1, str2, 11);'\n" RESET);
	r1 = strlcat(str1, str2, 11);
	printf(YEL "    Resultado esperado 5: " RESET "\n");
	printf("        "YEL"str1: "WHT"\"%s\"\n", str1);
	printf("        "YEL"r1: "WHT"%i\n", r1);
	printf("\n");
}
