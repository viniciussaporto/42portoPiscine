#!/bin/sh
export  FT_NBR1="\'?\"\\\"'\\" FT_NBR2="rcrdmddd" && echo $FT_NBR1 + $FT_NBR2 | tr "\'" 0 | tr '\\"?!' 1234 | tr 'mrdoc' 01234 | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'
# export is used to ensure environment variables are passed forward | FT_NBRX are the variables | && to execute next command | echo to add verbosity to variables | tr used to translate characters (in this case to base 5) | xargs to convert stardard input into arguments(in this case base13 output -and- base5 input) | bc gets the ibase5 and manipulates it and executes ASAP | lastly tr gets base13 and converts it into letters to form the desired word