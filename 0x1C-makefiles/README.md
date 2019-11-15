<html>
<h1>Project: Makefile</h1>
<p><strong>In this project we will learn how to use makefile and why should we use them.</strong></p>
<body>
<li>Task 0: Create your first Makefile.</li>
<li>Task 1: Requirements:
name of the executable: holberton
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files</li>
<li>Task 2: Create your first useful Makefile.</li>
<li>Task 3: Requirements:
name of the executable: holberton
rules: all, clean, oclean, fclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes the Emacs temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files</li>
<li>Task 4: Requirements:
name of the executable: holberton
rules: all, clean, fclean, oclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes the Emacs temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files</li>
<li>Task 5: Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).</li>
<li>Advanced Task 6:</li>
</body>
<br>
<br>
<footer>Made by: <strong>Daniel Baquero</stong></footer>
</html>
