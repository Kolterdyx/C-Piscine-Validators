/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:10:02 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 09:27:36 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex07/ft_rev_int_tab.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	int	tab1[] = {4, 6, 1, 5, 9, 3};
	int	tab2[] = {5, 2, 7, 8, 4, 1, 6};
	int size1 = 6;
	int size2 = 7;

	printf(CYN "-- Comprobando el ejercicio ex7:\n" RESET);
	printf(YEL "    tab1: " RESET "[%i, %i, %i, %i, %i, %i]\n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4], tab1[5]);
	printf(YEL "    tab2: " RESET "[%i, %i, %i, %i, %i, %i, %i]\n", tab2[0], tab2[1], tab2[2], tab2[3], tab2[4], tab2[5], tab2[6]);
	printf(YEL "    size1: " RESET "%i\n", size1);
	printf(YEL "    size2: " RESET "%i\n", size2);
	printf(BLU "    Ejecutando línea " GRN "'ft_rev_int_tab(tab1, size1);'\n");
	ft_rev_int_tab(tab1, size1);
	printf(YEL "    tab1: " RESET "[%i, %i, %i, %i, %i, %i]\n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4], tab1[5]);
	printf(BLU "    Ejecutando línea " GRN "'ft_rev_int_tab(tab2, size2);'\n");
	ft_rev_int_tab(tab2, size2);
	printf(YEL "    tab2: " RESET "[%i, %i, %i, %i, %i, %i, %i]\n", tab2[0], tab2[1], tab2[2], tab2[3], tab2[4], tab2[5], tab2[6]);
	printf("\n");
}
