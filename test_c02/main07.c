/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 00:51:27 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:27:01 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex07/ft_strupcase.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	printf(CYN "-- Comprobando ex07:\n" RESET);
	char	*str1;
	char	*str2;
	char	*r1;
	char	*r2;

	str1 = "yjfCFcjcjhbdscUVibsdcsHGVFFCc";
	str2 = "jhcgI425SSH76Hjhdvcg6Evjsdc";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strupcase(str1);'\n" RESET);
	r1 = ft_strupcase(str1);
	printf(YEL "    Resultado 1:" RESET " %s\n", r1);
	printf(BLU "    Ejecutando línea " GRN "'r2 = ft_strupcase(str2);'\n" RESET);
	r2 = ft_strupcase(str2);
	printf(YEL "    Resultado 2:" RESET " %s\n", r2);
	printf("\n");
}
