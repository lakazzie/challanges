/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   challenge_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 17:57:41 by lakazzie          #+#    #+#             */
/*   Updated: 2020/04/19 10:35:20 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int length;
	length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int main( int argc, char **argv)
{
	int i;
	char a;
	i = 2;
	
	if(argc > 3)
	{
		while(i <= argc)
		{
			if (ft_strlen(argv[i]) <= ft_strlen( *argv[a]) || ft_strlen(*argv[i] >= ft_strlen(*argv[a])))
			{
				i == a;
			}	
		i++;
		}
	ft_putstr( *argv[i]);
	}	
	else if (ft_strlen(*argv[i]) != ft_strlen( *argv[a]))
		{
			ft_putstr("ZERO\n");
		}
	else if (argc != 3)
	{
		ft_putstr("\n \n \n");
	}
	else
	{
		if(*argv[a] > 1)
		{
			ft_putstr("Please enter 1 char numnut \n \n");
		} 	
	
	return (0);
	}
}