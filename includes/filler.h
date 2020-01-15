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

struct s_player player;

char	*set_token(char *map);
char	*get_token(int fd);
char	*transform_token(char *map);
#endif //FILLER_FILLER_H
