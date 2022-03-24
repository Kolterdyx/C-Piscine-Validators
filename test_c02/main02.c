/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:53:20 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:25:35 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_str_is_alpha.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	printf(CYN "-- Comprobando ex02:\n" RESET);
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	int		r1;
	int		r2;
	int		r3;
	int		r4;
	int		r5;

	str1 = "abCD";
	str2 = "1234";
	str3 = "aB12";
	str4 = "12Ab";
	str5 = "";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(YEL "    str3:" RESET " \"%s\"\n", str3);
	printf(YEL "    str4:" RESET " \"%s\"\n", str4);
	printf(YEL "    str5:" RESET " \"%s\"\n", str5);
	printf(BLU "    Ejecutando línea " GRN "'r1 = ft_str_is_alpha(str1);'\n" RESET);
	r1 = ft_str_is_alpha(str1);
	printf(YEL "    Resultado 1:" RESET " %i\n", r1);
	printf(BLU "    Ejecutando línea " GRN "'r2 = ft_str_is_alpha(str2);'\n" RESET);
	r2 = ft_str_is_alpha(str2);
	printf(YEL "    Resultado 2:" RESET " %i\n", r2);
	printf(BLU "    Ejecutando línea " GRN "'r3 = ft_str_is_alpha(str3);'\n" RESET);
	r3 = ft_str_is_alpha(str3);
	printf(YEL "    Resultado 3:" RESET " %i\n", r3);
	printf(BLU "    Ejecutando línea " GRN "'r4 = ft_str_is_alpha(str4);'\n" RESET);
	r4 = ft_str_is_alpha(str4);
	printf(YEL "    Resultado 4:" RESET " %i\n", r4);
	printf(BLU "    Ejecutando línea " GRN "'r5 = ft_str_is_alpha(str5);'\n" RESET);
	r5 = ft_str_is_alpha(str5);
	printf(YEL "    Resultado 5:" RESET " %i\n", r5);
	printf("\n");
}
