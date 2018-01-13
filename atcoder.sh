#!/bin/sh

read -p "Please input directory name : " name
read -p "Please input using language [rb, c, cpp] : " lang

case $name in
    ARC* )
        mkdir -p "./ARC/$name"
        cd "./ARC/$name"
        touch A.$lang B.$lang C.$lang D.$lang;;
    ABC* )
        mkdir -p "./ABC/$name"
        cd "./ABC/$name"
        touch A.$lang B.$lang C.$lang D.$lang;;
    ATC* )
        mkdir -p "./ATC/$name"
        cd "./ATC/$name"
        touch A.$lang B.$lang C.$lang D.$lang;;
    AGC* )
        mkdir -p "./AGC/$name"
        cd "./AGC/$name"
        touch A.$lang B.$lang C.$lang D.$lang;;
    *)
        mkdir -p "./Others/$name"
        cd "./Others/$name"
        touch A.$lang B.$lang C.$lang D.$lang;;
esac

echo "Completed!"

exec /bin/zsh
