/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:09:58 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 09:27:23 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_ultimate_div_mod.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf(CYN "-- Comprobando el ejercicio ex04:\n" RESET);
	a = 21;
	b = 9;
	printf(YEL "    a: " RESET "%i\n", a);
	printf(YEL "    b: " RESET "%i\n", b);
	printf(BLU "    Ejecutando línea " GRN "'ft_ultimate_div_mod(&a, &b);'\n");
	ft_ultimate_div_mod(&a, &b);
	printf(YEL "    a: " RESET "%i\n", a);
	printf(YEL "    b: " RESET "%i\n", b);
	printf("\n");
}
