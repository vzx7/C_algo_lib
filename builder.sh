#!/usr/bin/bash

EXAMP="Example:\n $./builder.sh source_file_name comp_output_filenme"
if test $1
    then
    if test $2
        then
            gcc ./$1 -o ./build/$2
            echo "Файл $1 успешно скомпилирован в ./build/$2"
        else 
            echo "Please pass the name of the file for the compilation output as the second argument!"
            echo -e $EXAMP;
            exit 1;
        fi
    else 
        echo "Please pass the name of the source file as the first argument!"
        echo -e $EXAMP;
        exit 1;
fi
exit 0;