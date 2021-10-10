#!/bin/bash

name=${1%.cpp}
clang++-12 $name.cpp -o $name.out
if [ -s $name.in ]
then
	./$name.out < $name.in
else
	./$name.out
fi