/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   filler.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:14:36 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:14:39 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_FILLER_H
#define FILLER_FILLER_H

int					set_piece(char *, int, int);
char				*get_piece(char *);
char				*get_map(char *);
char				*transform_piece(char *);
void				init_game(int);
struct s_coords		input_locator(struct s_vars *);
int					event_listener(struct s_vars *);

#endif //FILLER_FILLER_H
