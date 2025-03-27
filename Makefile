# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 14:57:46 by mbaumgar          #+#    #+#              #
#    Updated: 2025/02/18 13:14:57 by mbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	echo "try again dans le bon doss meuf"

git:
	./fclean_all_dat_shh.sh
	git add .
	git commit -m "$(m)"
	git push

.PHONY: all git