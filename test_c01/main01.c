/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:09:36 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 08:20:17 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/ft_ultimate_ft.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	int	num;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;

	printf(CYN "-- Comprobando el ejercicio ex01:\n" RESET);
	num = 21;
	p1 = &num;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	printf(YEL "    num: " RESET "%i\n", num);
	printf(BLU "    Ejecutando línea " GRN "'ft_ultimate_ft(&p8);'\n");
	ft_ultimate_ft(&p8);
	printf(YEL "    num: " RESET "%i\n", num);
	printf("\n");
}
