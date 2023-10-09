#!/bin/zsh
for file in *.cpp
do
  g++ -c "$file" -o "build/${file%.cpp}.o"
done
