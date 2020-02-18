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
** Struct represents a single 'player' object
** Each object must be defined, and so must their function pointers.
** @id		represents a user identifier (i.e. 'Player 1')
** @token	represents either 'x' or 'o'
** 			tokens must be overriden by capitals if != last piece (all others).
** 			applied pieces must atleast override one cell of the previous piece.
** @BitField_Explained:
 * 	int id : 2;
** 		is an integer type of bit size 2.
** 	unsigned int x : 4,
** 				 y : 4;
** 		splits a bit field into two 4 bit fields.
**
*/

struct s_vars
{
	unsigned int	id : 2;
	char			token;
	char			*piece;
	char			*map;
};

struct	s_coords
{
	unsigned int 	x : 4,
				 	y : 4;
};

#endif //FILLER_PLAYER_H
