# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clbergon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/16 19:42:29 by clbergon          #+#    #+#              #
#    Updated: 2017/03/16 19:42:35 by clbergon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 |  grep -i "bomber" | grep -i "nicolas" | cut -f 3 | grep '[0-9]'
