CC = gcc
CFLAGS = -Wall -g
SRC = number_reader.c
TARGET = number_reader


$(TARGET): $(SRV)
	$(CC) $(CFLAGS) -o  $(TARGET) $(SRC)

clean:
	rm -f $(TARGET) 
	
.PHONY: all clean 




