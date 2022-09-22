C=gcc
CFLAGS=-W -Wall -std=c99
LDFLAGS=
EXEC=app
SRC= ../generateur/generateur.c app.c
OBJ= $(SRC:.c=.o)

all: $(EXEC)

app: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)
	
%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) -I../generateur
	
.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
