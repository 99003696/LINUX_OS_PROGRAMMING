PROJECT_NAME = ASSIGNMENT1

SRC = mystring.c\
myutils.c\
test.c\
bit_set_reset.c


$(PROJECT_NAME).out : $(SRC)
	gcc $^ -o $@

run : $(PROJECT_NAME).out
	./$^

clean:
	rm -rf *.o *.out