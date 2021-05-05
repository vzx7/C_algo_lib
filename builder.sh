#!/usr/bin/bash

EXAMP="Example:\n $./builder.sh source_file_name comp_output_filenme"

if ! [ -d ./build ]; 
    then
        mkdir build;
fi

if test $1
    then
    if test $2
        then
            gcc ./$1 -o ./build/$2
            echo "File $1 successfully compiled into ./build/$2"
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