/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:16:26 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/21 13:46:30 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*creating ft_putchar function using putchar */
void ft_putchar(char c){
	putchar(c);
}

/*Created a function the will loop through the the last digit of the triple digits then loop through the middle digit and the first one*/
void ft_print_comb(void){
	char i;
	char j;
	char k;
	
	i = '0';
	while (i <= '9'){
		j = '0';
		while (j <= '9'){
			k = '0';
			while (k <= '9'){
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				ft_putchar(',');
				k++;
			}
			j++;
		}
		i++;
	}
}

int main(){
	ft_print_comb();
	return 0;
}
