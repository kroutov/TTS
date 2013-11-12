CXX=		g++

CXXFLAGS=	-Wall -I/usr/include/speech_tools 

NAME=		TextToSpeech

SRC=		main.cpp	\
		$(NAME).cpp

SRC_OBJ=	${SRC:.cpp=.o}

LDLIBS= 	-lFestival -lestbase -lestools -leststring

all: 		$(NAME)

$(NAME): 	$(SRC_OBJ)
		$(CC) -o $(NAME) $(SRC) $(LDLIBS) $(CXXFLAGS)

.PHONY: clean fclean

clean:
	rm -rf *.o *~

fclean: clean
	rm -rf $(NAME)