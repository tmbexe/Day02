/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:29:31 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/21 13:08:58 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c){
	putchar(c);
}

void ft_is_negative(int n){
	if(n < 0){
		ft_putchar('N');
	}else{
		ft_putchar('P');
	}
	ft_putchar('\n');
}

int main(){
	ft_is_negative(-6);
	return 0;
}
