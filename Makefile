all:
	clang -I"./inc" -std=c11 -Wall -Wextra -Werror -Wpedantic ./src/count.c ./src/error.c ./src/if.c ./src/get_combinations.c ./src/iftwo.c ./src/mx_printchar.c ./src/mx_printstr.c ./src/mx_strchr.c ./src/mx_strcmp.c ./src/mx_strcpy.c ./src/mx_strdup.c ./src/mx_strlen.c ./src/mx_strnew.c ./src/sort.c ./src/valid.c ./src/main.c -o race03

install:
	clang -I"./inc" -std=c11 -Wall -Wextra -Werror -Wpedantic ./src/count.c ./src/error.c ./src/if.c ./src/get_combinations.c ./src/iftwo.c ./src/mx_printchar.c ./src/mx_printstr.c ./src/mx_strchr.c ./src/mx_strcmp.c ./src/mx_strcpy.c ./src/mx_strdup.c ./src/mx_strlen.c ./src/mx_strnew.c ./src/sort.c ./src/valid.c ./src/main.c -o race03

uninstall:
	rm ./race03

clean:
	rm ./race03

reinstall:
	make uninstall
	make install
