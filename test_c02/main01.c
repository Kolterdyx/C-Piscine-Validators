/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:51:40 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:25:17 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "../ex01/ft_strncpy.c"
#include <stdio.h>

int	main(void)
{
	printf(CYN "-- Comprobando ex01:\n" RESET);
	char	*str1;
	char	str2[1000];
	char	*str3;

	str1 = "abcdefghijklmnopq";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " NULL\n");
	printf(YEL "    str3:" RESET " NULL\n");
	printf(BLU "    Ejecutando línea " GRN "'str3 = ft_strncpy(str2, str1, 10);'\n" RESET);
	str3 = ft_strncpy(str2, str1, 10);
	printf(BLU "    Modificando valor de " GRN "'str1'\n" RESET);
	str1 = "12345678";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(YEL "    str3:" RESET " \"%s\"\n", str3);
	printf(BLU "    Ejecutando línea " GRN "'str3 = ft_strncpy(str2, str1, 3);'\n" RESET);
	str3 = ft_strncpy(str2, str1, 3);
	printf(BLU "    Modificando valor de " GRN "'str1'\n" RESET);
	str1 = "zyxwvutsrq";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(YEL "    str3:" RESET " \"%s\"\n", str3);
	printf("\n");
}
