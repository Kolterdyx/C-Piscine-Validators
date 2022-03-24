#!/bin/bash

results=()

function stop() {
	echo -e "Pulsa ${YEL}espacio${RESET} para seguir";
	echo -e "Pulsa ${YEL}Q${RESET} para salir";
	count=0;
	while : ; do
		read -d'' -s -n1
		if [[ $REPLY = " " ]] ; then
			break;
		elif [[ $REPLY = "q" ]] ; then
			clear;
			exit 0;
		fi
	done
	clear
}

function validate() {
	echo -e "Pulsa ${YEL}S${RESET} si consideras que el ejercicio está ${GRN}correcto${RESET}"
	echo -e "Pulsa ${YEL}N${RESET} si consideras que el ejercicio está ${RED}incorrecto${RESET}";
	echo -e "Pulsa ${YEL}Q${RESET} para salir";
	count=0;
	while : ; do
		read -d'' -s -n1
		if [[ $REPLY = "s" ]] ; then
			results+=("$GRN Correcto $RESET")
			break;
		elif [[ $REPLY = "n" ]] ; then
			results+=("$RED Incorrecto $RESET")
			break;
		elif [[ $REPLY = "q" ]] ; then
			clear;
			exit 0;
		fi
	done
	clear
}

# Estas variables son las rutas relativas de los ejercicios

file00="../ex00/ft_strcpy.c"
file01="../ex01/ft_strncpy.c"
file02="../ex02/ft_str_is_alpha.c"
file03="../ex03/ft_str_is_numeric.c"
file04="../ex04/ft_str_is_lowercase.c"
file05="../ex05/ft_str_is_uppercase.c"
file06="../ex06/ft_str_is_printable.c"
file07="../ex07/ft_strupcase.c"
file08="../ex08/ft_strlowcase.c"
file09="../ex09/ft_strcapitalize.c"
file10="../ex10/ft_strlcpy.c"
file11="../ex11/ft_putstr_non_printable.c"
file12="../ex12/ft_print_memory.c"

RED="\x1B[31m"
GRN="\x1B[32m"
YEL="\x1B[33m"
BLU="\x1B[34m"
MAG="\x1B[35m"
CYN="\x1B[36m"
WHT="\x1B[37m"
RESET="\x1B[0m"

n=0
function test() {
	num=$(printf "%02d" $n)
	echo -e "$GRN+-########################-+$RESET"
	echo -e "$GRN|      Ejercicio $num        |$RESET"
	echo -e "$GRN+-########################-+$RESET"
	n=$((n+1))
	{
		command && {
			echo -e "${MAG}Comprobando norma${YEL}"

			norminette -R CheckForbiddenSourceHeader $2

			echo -e "${MAG}Compilando ${YEL}'$2'${RESET}"
			gcc -Wall -Werror -Wextra $1 -o main.out
			echo -e "${YEL}'$2' ${MAG}compilado${RESET}"
			echo -e "${MAG}Ejecutando ${YEL}'$2'${RESET}"
			./main.out
			rm main.out
		}
	} || {
		echo -e "${RED}+-#######################################################################################-+${RESET}"
		echo -e "${RED}     Ha ocurrido un error y no se ha podido comprobar el ejercicio ${YEL}'$2' ${RESET}"
		echo -e "${RED}+-#######################################################################################-+${RESET}"
	}
	validate
}
clear
echo -e "$GRN+-#########################################-+$RESET"
echo -e "$GRN| Bienvenido al validador del proyecto C 02 |$RESET"
echo -e "$GRN+-#########################################-+$RESET"
echo -e ""
echo -e "${MAG}Este validador comprueba que los ejercicios pasan la ${YEL}norminette${MAG}, los compila y los ejecuta automáticamente y te muestra los resultados, para que puedas evaluar si el resultado es correcto no."
echo -e "Tras la evaluación, se mostrará una lista de los resultados para que el evaluador pueda recordar qué ha decidido en cada ejercicio sin tener que revisarlo una y otra vez."
echo -e "En caso de fallo o duda, puedes contactar conmigo (cigarcia).${RESET}"
echo ""

stop

# Modifica este bloque para que haya un test por archivo.

test "main00.c" "$file00"
test "main01.c" "$file01"
test "main02.c" "$file02"
test "main03.c" "$file03"
test "main04.c" "$file04"
test "main05.c" "$file05"
test "main06.c" "$file06"
test "main07.c" "$file07"
test "main08.c" "$file08"
test "main09.c" "$file09"
test "main10.c" "$file10"
test "main11.c" "$file11"
test "main12.c" "$file12"

echo -e "$GRN+-#########################################-+$RESET"
echo -e "$GRN|             Test completado               |$RESET"
echo -e "$GRN+-#########################################-+$RESET"
n=0
for value in "${results[@]}"
do
	num=$(printf "%02d" $n)
    echo -e "ex$num: $value"
	n=$((n+1))
done