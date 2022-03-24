/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:15:43 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:29:08 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex11/ft_putstr_non_printable.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	printf(CYN "-- Comprobando ex11:\n" RESET);
	str1 = "Coucou\ntu vas bien ?";
	str2 = "Otro string \t con caracteres no \r\f imprimibles";
	printf(YEL "    str1:" RESET " \"%s\"\n", str1);
	printf(YEL "    str2:" RESET " \"%s\"\n", str2);
	printf(BLU "    Ejecutando línea " GRN "'ft_putstr_non_printable(str1);" YEL "'\n    Resultado 1:" RESET " ");
	printf("\n    ");
	ft_putstr_non_printable(str1);
	printf("\n");
	printf(BLU "    Ejecutando línea " GRN "'ft_putstr_non_printable(str2);" YEL "'\n    Resultado 2:" RESET " ");
	printf("\n    ");
	ft_putstr_non_printable(str2);
	printf("\n    ");
	printf("\n");
}
