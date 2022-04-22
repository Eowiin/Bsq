# Bsq

## Epitech project

## Usage 

Use "make" to compile .c files and get the executable  
To execute the program, do :  
* ./bsq map.txt
  
If you don't have a map.txt file, use the script gen.pl to generate one, do :  
* x for the width of the map
* y for the height of the map
* density for the percentage of obstacles in the map
  
Example :  
perl gen.pl x y density > map.txt to create a map.txt file with the new map generated  
perl gen.pl 30 24 25 > map.txt  
it creates a map with a width of 30 and a height of 24 with 25% of obstacles in it.  
  
Use "make fclean" to delete all compiled files and the executable
