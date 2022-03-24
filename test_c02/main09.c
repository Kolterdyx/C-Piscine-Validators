/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:17:24 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:27:15 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex09/ft_strcapitalize.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	printf(CYN "-- Comprobando ex09:\n" RESET);
	char	*str1;
	char	*str2;
	char	*r1;
	char	*r2;

	str1 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	str2 = "42 o no 42,esa es-la+funcion";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strcapitalize(str1);'\n" RESET);
	r1 = ft_strcapitalize(str1);
	printf(YEL "    Resultado 1:" RESET " %s\n", r1);
	printf(BLU "    Ejecutando línea " GRN "'r2 = ft_strcapitalize(str2);'\n" RESET);
	r2 = ft_strcapitalize(str2);
	printf(YEL "    Resultado 2:" RESET " %s\n", r2);
	printf("\n");
}
