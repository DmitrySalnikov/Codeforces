#!/bin/bash

cp template.cpp $1.cpp
touch $1.in
subl $1.cpp $1.in
