#!/bin/sh

read -p "Please input directory name : " name

case $name in
    ARC* )
        mkdir "./ARC/$name"
        cd "./ARC/$name";;
    ABC* )
        mkdir "./ABC/$name"
        cd "./ABC/$name";;
    ATC* )
        mkdir "./ATC/$name"
        cd "./ATC/$name";;
    *)
        mkdir "./Others/$name"
        cd "./Others/$name";;
esac

echo "Directory created!"

exec /bin/zsh
