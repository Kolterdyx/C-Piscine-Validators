/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:09:47 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 08:20:21 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_swap.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf(CYN "-- Comprobando el ejercicio ex02:\n" RESET);
	a = 21;
	b = 13;
	printf(YEL "    a: " RESET "%i\n", a);
	printf(YEL "    b: " RESET "%i\n", b);
	printf(BLU "    Ejecutando línea " GRN "'ft_swap(&a, &b);'\n");
	ft_swap(&a, &b);
	printf(YEL "    a: " RESET "%i\n", a);
	printf(YEL "    b: " RESET "%i\n", b);
	printf("\n");
}
