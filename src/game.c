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

/**
 * Represents the player initialization (Object Creation).
 * The function allowed the object should be initialized by
 * the objects function pointers.
 * @param id User ID
 * @param name User NAME
 */
void	init_game(int id)
{
	struct s_vars vars = {
			.id = id,
			.map = read_stdout("Plateau", ' ', 8),
			.piece = read_stdout("Piece", ' ', 5),
			.token = (id == 1 ? 'o' : 'x');
	};
	return (vars);
}

/**
 * An infinite loop whilst the game is running.
 * @param vars
 * @return
 */
int		event_listener(struct s_vars *vars)
{
	while (1)
	{
		get_map(vars->map);
		get_piece(vars->piece);
		set_piece(vars, input_locator(vars));
	}
};
