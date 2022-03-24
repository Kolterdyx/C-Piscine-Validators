/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:09:14 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 08:19:45 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include <stdio.h>
#include "../ex00/ft_ft.c"

int	main(void)
{
	printf(CYN "-- Comprobando el ejercicio ex00:\n"RESET);
	int num = 21;
	printf(YEL"    num: "RESET"%i\n", num);
	printf(BLU"    Ejecutando línea "GRN"'ft_ft(&num);'\n");
	ft_ft(&num);
	printf(YEL"    num: "RESET"%i\n", num);
	printf("\n");
}
