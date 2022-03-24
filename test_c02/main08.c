/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 01:20:45 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:27:09 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex08/ft_strlowcase.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	printf(CYN "-- Comprobando ex08:\n" RESET);
	char	*str1;
	char	*str2;
	char	*r1;
	char	*r2;

	str1 = "yjfCFcjKSJDNCSCscUVibsVDFsHGVFFCc";
	str2 = "jCDSVI425SSH76HjhCSDVSD2325sdc";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_strlowcase(str1);'\n" RESET);
	r1 = ft_strlowcase(str1);
	printf(YEL "    Resultado 1:" RESET " %s\n", r1);
	printf(BLU "    Ejecutando línea " GRN "'r2 = ft_strlowcase(str2);'\n" RESET);
	r2 = ft_strlowcase(str2);
	printf(YEL "    Resultado 2:" RESET " %s\n", r2);
	printf("\n");
}
