/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:33:02 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:27:30 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex10/ft_strlcpy.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	str2[1000];
	int		size;

	printf(CYN "-- Comprobando ex10:\n" RESET);
	str1 = "Hello there, Venus";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " NULL\n");
	printf(YEL "    size:" RESET " NULL\n");
	printf(BLU "    Ejecutando línea " GRN "'size = ft_strlcpy(str2, str1, 10);'\n" RESET);
	size = ft_strlcpy(str2, str1, 10);
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(YEL "    size:" RESET " %i\n", size);
	printf(BLU "    Ejecutando línea " GRN "'size = ft_strlcpy(str2, str1, 1);'\n" RESET);
	size = ft_strlcpy(str2, str1, 1);
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(YEL "    size:" RESET " %i\n", size);
	printf(BLU "    Ejecutando línea " GRN "'size = ft_strlcpy(str2, str1, 19);'\n" RESET);
	size = ft_strlcpy(str2, str1, 19);
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(YEL "    size:" RESET " %i\n", size);
	printf(BLU "    Ejecutando línea " GRN "'size = ft_strlcpy(str2, str1, 18);'\n" RESET);
	size = ft_strlcpy(str2, str1, 18);
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(YEL "    size:" RESET " %i\n", size);
	printf("\n");
}
