/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:09:53 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 08:23:16 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex03/ft_div_mod.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	printf(CYN "-- Comprobando el ejercicio ex03:\n" RESET);
	a = 21;
	b = 9;
	printf(YEL "    a: " RESET "%i\n", a);
	printf(YEL "    b: " RESET "%i\n", b);
	printf(YEL "    div: " RESET "NULL\n");
	printf(YEL "    mod: " RESET "NULL\n");
	printf(BLU "    Ejecutando línea " GRN "'ft_div_mod(a, b, &div, &mod);'\n");
	ft_div_mod(a, b, &div, &mod);
	printf(YEL "    a: " RESET "%i\n", a);
	printf(YEL "    b: " RESET "%i\n", b);
	printf(YEL "    div: " RESET "%i\n", div);
	printf(YEL "    mod: " RESET "%i\n", mod);
	printf("\n");
}
