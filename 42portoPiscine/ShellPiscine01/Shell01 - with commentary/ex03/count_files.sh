find . -type f -o -type d | wc -l
#find at the source directory | -type f for file -o or -type d for directory | 
#-wc word count command with -l to print lines count | sed to replace one space with no space (unnecessary at the end < | sed 's/ //g'>)