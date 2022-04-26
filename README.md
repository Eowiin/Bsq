# Bsq

## Epitech project

## Usage 

`make` to compile .c files and get the executable  
`make clean` to delete all compiled files  
`make fclean` to delete all compiled files and the executable  
`make re` -> call `make fclean` then `make` rules  
To execute the program, do :  
* `./bsq map.txt`
  
If you don't have a map.txt file, use the script gen.pl to generate one, do :  
* x for the width of the map
* y for the height of the map
* density for the percentage of obstacles in the map
  
Example :  
`perl gen.pl x y density > map.txt` -> create a map.txt file with the new map generated  
perl gen.pl 30 24 25 > map.txt  
it creates a map with a width of 30 and a height of 24 with 25% of obstacles in it.
