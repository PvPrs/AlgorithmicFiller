/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   player.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:17:01 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:17:01 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../includes/player.h"
#include "../libft/includes/libft.h"
#include <stdio.h>

/*
** Initializes and allocates the struct variables
** required for initialization.
** @param id PlayerID(1:2)
** @Designated_initializers allow members to be initialized by name,
** in any order, and without explicitly providing the preceding values.
** @Compound_Literals Allow you to assign or pass value's by typecasting.
** to understand the below syntax head to:
** https://en.wikipedia.org/wiki/C_syntax#Compound_literals
*/
struct s_vars	*init_game(int id)
{
	struct s_vars *vars;

	vars = malloc(sizeof(struct s_vars));
	*vars = (struct s_vars) {
		.id = id,
		.board = {0},
		.piece = {0},
		.token = (id == 1 ? 'o' : 'x')
	};
	return (vars);
}

/*
** An infinite loop whilst the game is running functioning as an event_listener.
** @param vars
** @return 1 = won, 0 = loss.
*/
int		event_listener(struct s_vars *vars)
{
	while (1)
	{
		get_board(&vars->board);
		get_piece(&vars->piece);
		set_piece(vars, input_locator(vars));
	}
};
