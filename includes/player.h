/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   player.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/17 12:57:26 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/02/17 12:57:28 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_PLAYER_H
#define FILLER_PLAYER_H

/**
** @brief
** player.h represents a header file containing the structures and variables
** of the current specific game state.
** @BitField_Explained
** int id : 2;
** 		is an integer type of bit size 2.
** unsigned int x : 4,
** 				 y : 4;
** 		splits a bit field into two 4 bit fields.
**
*/

struct	s_coords
{
	unsigned int	x : 4,
					y : 4;
};

struct s_map
{
    char			*map;
    struct s_coords coords;
};

/**
 * @struct s_vars represents the game variables.
 *
 */
struct s_vars
{
	unsigned int	id : 2;
	char			token;
	struct s_map	piece;
	struct s_map	board;
};



#endif //FILLER_PLAYER_H
