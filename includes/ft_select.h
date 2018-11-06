/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_select.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftreand <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/07 00:20:08 by ftreand      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 00:41:43 by ftreand     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H
# include <termios.h>
# include <unistd.h>
# include <term.h>
# include <stdlib.h>
# include <stdio.h> // printf

typedef struct	s_sl
{
	char *env;
}				t_sl;

int		main(void);

#endif
