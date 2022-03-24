/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:49:51 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:24:47 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "../ex00/ft_strcpy.c"
#include <stdio.h>

int	main(void)
{
	printf(CYN "-- Comprobando ex00:\n" RESET);
	char	*str1;
	char	str2[1000];

	str1 = "abcd";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " NULL\n");
	printf(BLU "    Ejecutando línea " GRN "'ft_strcpy(str2, str1);'\n" RESET);
	ft_strcpy(str2, str1);
	printf(BLU "    Modificando valor de " GRN "'str1'\n" RESET);
	str1 = "1234";
	str1 = "1234";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf("\n");
}
