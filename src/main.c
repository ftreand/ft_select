/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftreand <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/07 00:33:17 by ftreand      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 19:56:39 by ftreand     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_select.h"

int		init_term(t_sl *sl, t_ter *ter)
{
	int i;

	i = 0;
	if ((sl->type = getenv("TERM")) == NULL)
		return (0);
	if ((i = tgetent(NULL, sl->type) <= 0))
	{
		i == 0 ? ft_putstr("terminal type isn't defined in termcap database\n")
			: ft_putstr("couldn't access to the termcap database\n");
		return (0);
	}
	if ((i = tcgetattr(0, ter)) == -1)
		return (0);
	return (1);
}

void	init_struct(t_sl *sl)
{
	sl->type = NULL;
}

int		main(void)
{
	t_sl	sl;
	t_ter	ter;
	int larg;
	int lon;

	init_struct(&sl);
	if (!init_term(&sl, &ter))
		return (0);
	larg = tgetnum("li");
	lon = tgetnum("co");
	printf("larg = %d\n", larg);
	printf("long = %d\n", lon);
	printf("type = %s\n", sl.type);
	return (0);
}
