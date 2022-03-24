/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cigarcia <cigarcia@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 04:30:21 by cigarcia          #+#    #+#             */
/*   Updated: 2022/03/23 04:44:54 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex12/ft_print_memory.c"
#include "colors.h"
#include <stdio.h>

int	main(void)
{
	printf(CYN "-- Comprobando ex12:\n" RESET);
	int		size1;
	int		size2;
	char	str1[] = "Bonjour les amiseeeeeee\teeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	char	str2[] = "Esta es otra pruebaaaaa\tksdovnsdcsdlsi no se que poner aqui de ejemplo aaaAAAaaaAaa sdcGsdivndiosSDVISBDVDIFvfisnosvfb ayudaporfavornoentiendonadanocomprendoporqueesteestandificil:(";

	size1 = 182;
	size2 = 0;
	printf(YEL"    str1: "RESET"\"%s\"\n", str1);
	printf(YEL"    str2: "RESET"\"%s\"\n", str2);
	printf(YEL"    size1: "RESET"\"%i\"\n", size1);
	printf(YEL"    size2: "RESET"\"%i\"\n", size2);
	printf(BLU "    Ejecutando línea " GRN "'ft_print_memory(str1, size1);'" RESET);
	printf(RESET"\n");
	ft_print_memory(str1, size1);
	printf(RESET"\n");
	printf(BLU "    Ejecutando línea " GRN "'ft_print_memory(str2, size2);'" RESET);
	printf(RESET"\n");
	ft_print_memory(str2, size2);
	printf(RESET"\n");
}
