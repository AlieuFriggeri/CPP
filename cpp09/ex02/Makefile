# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kistod <kistod@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 10:58:16 by afrigger          #+#    #+#              #
#    Updated: 2023/09/17 13:24:50 by kistod           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREENGREEN = \033[38;5;46m
RED = \033[0;31m
GREY = \033[38;5;240m
RESET = \033[0m

NAME =     PmergeMe

CC =         c++
CFLAGS =     -Wall -Wextra -Werror -std=c++98
RM =         rm -rf

DIR_H = headers/
DIR_S =	srcs/
DIR_O =	objs/

SRCS_LIST =	main.cpp PmergeMe.cpp

SRCS =		${addprefix ${DIR_S}, ${SRCS_LIST}}

OBJS =		${SRCS:${DIR_S}%.cpp=${DIR_O}%.o}

# ${NAME}: title ${LIBFT} ${MLX} ${OBJS}
${NAME}: ${OBJS}
	@echo "$(RESET)[$(GREENGREEN)${NAME}$(RESET)]: ${NAME} Objects were created${GREY}"
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo "$(RESET)[$(GREENGREEN)${NAME}$(RESET)]: ${NAME} created !"

all: ${NAME}

${DIR_O}%.o:${DIR_S}%.cpp
	@printf "\033[38;5;240m"
	@mkdir -p ${DIR_O}
	${CC} ${CFLAGS} -I ${DIR_H} -o $@ -c $<

clean:
	@echo "$(RED) ██████╗██╗     ███████╗ █████╗ ███╗   ██╗██╗███╗   ██╗ ██████╗$(RESET)"
	@echo "$(RED) ██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║██║████╗  ██║██╔════╝$(RESET)"
	@echo "$(RED) ██║     ██║     █████╗  ███████║██╔██╗ ██║██║██╔██╗ ██║██║  ███╗$(RESET)"
	@echo "$(RED) ██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║██║██║╚██╗██║██║   ██║$(RESET)"
	@echo "$(RED) ╚██████╗███████╗███████╗██║  ██║██║ ╚████║██║██║ ╚████║╚██████╔╝$(RESET)"
	@echo "$(RED)  ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═══╝ ╚═════╝ $(RESET)"
	@echo "[$(RED)${NAME}$(RESET)]: Cleaning ${NAME} Objects...${GREY}"
	${RM} ${OBJS}
	${RM} ${DIR_O}
	@echo "[$(RED)${NAME}$(RESET)]: ${NAME} Objects were cleaned${GREY}"

fclean: clean
	@echo "${RESET}[$(RED)${NAME}$(RESET)]: Cleaning...${GREY}"
	${RM} ${NAME}
	@echo "${RESET}[$(RED)${NAME}$(RESET)]:Executable was cleaned"

re: fclean all

.PHONY: all clean fclean re 