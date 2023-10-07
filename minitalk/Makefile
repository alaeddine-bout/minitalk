SERVER			 =	server
SERVER_SRC		 =	server.c minitalk_utils.c
SERVER_OBJ		 =	$(SERVER_SRC:.c=.o)

CLIENT			 =	client
CLIENT_SRC		 =	client.c minitalk_utils.c
CLIENT_OBJ		 =	$(CLIENT_SRC:.c=.o)

SERVER_BONUS     =  server_bonus
SERVER_SRC_BONUS =  ./bonus/server_bonus.c ./bonus/minitalk_utils_bonus.c
SERVER_OBJ_BONUS =  $(SERVER_SRC_BONUS:.c=.o)

CLIENT_BONUS     =  client_bonus
CLIENT_SRC_BONUS =  ./bonus/client_bonus.c ./bonus/minitalk_utils_bonus.c
CLIENT_OBJ_BONUS =  $(CLIENT_SRC_BONUS:.c=.o)

CC				=	cc
CFLAGS			= 	-Wall -Werror -Wextra

all : $(SERVER) $(CLIENT)

$(SERVER) : $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(SERVER_SRC) -o $(SERVER)
$(CLIENT) : $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(CLIENT_SRC) -o $(CLIENT)

bonus : $(SERVER_BONUS) $(CLIENT_BONUS)

$(SERVER_BONUS) : $(SERVER_OBJ_BONUS)
	$(CC) $(CFLAGS) $(SERVER_SRC_BONUS) -o $(SERVER_BONUS)
$(CLIENT_BONUS) : $(CLIENT_OBJ_BONUS)
	$(CC) $(CFLAGS) $(CLIENT_SRC_BONUS) -o $(CLIENT_BONUS)

clean :
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ) $(SERVER_OBJ_BONUS) $(CLIENT_OBJ_BONUS)

fclean : clean
	rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)

re : fclean all
