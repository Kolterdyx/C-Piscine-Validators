/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:10:00 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 09:27:27 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex05/ft_putstr.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello world";
	printf(CYN "-- Comprobando el ejercicio ex05:\n" RESET);
	printf(YEL "    str: " RESET "%s\n", str);
	printf(BLU "    Ejecutando línea " GRN "'ft_putstr(str);'\n");
	printf(YEL "    Resultado: " RESET "\n");
	ft_putstr(str);
	printf("\n");
	printf("\n");
}
