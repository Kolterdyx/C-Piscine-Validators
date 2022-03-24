/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:10:04 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 09:27:30 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex06/ft_strlen.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello world";
	printf(CYN "-- Comprobando el ejercicio ex06:\n" RESET);
	printf(YEL "    str: " RESET "%s\n", str);
	printf(BLU "    Ejecutando línea " GRN "'ft_strlen(str);'\n");
	printf(YEL "    Resultado: " RESET "%i\n", ft_strlen(str));
	printf("\n");
}
