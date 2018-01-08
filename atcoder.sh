#!/bin/sh

read -p "Please input directory name : " name

case $name in
    ARC* )
        mkdir -p "./ARC/$name"
        cd "./ARC/$name";;
    ABC* )
        mkdir -p "./ABC/$name"
        cd "./ABC/$name";;
    ATC* )
        mkdir -p "./ATC/$name"
        cd "./ATC/$name";;
    AGC* )
        mkdir -p "./AGC/$name"
        cd "./AGC/$name";;
    *)
        mkdir -p "./Others/$name"
        cd "./Others/$name";;
esac

echo "Directory created!"

exec /bin/zsh
