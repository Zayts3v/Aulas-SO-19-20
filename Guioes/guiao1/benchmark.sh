#!/bin/bash

./write_file in.txt 1

./write_file in2.txt 1024

./write_file in3.txt 1024000

./write_file in4.txt 10240000

./write_file in5.txt 102400000

time -p ./mycp in.txt out.txt 1
md5sum in.txt out.txt

rm out.txt

time -p ./mycp in2.txt out.txt 1024
md5sum in2.txt out.txt

rm out.txt

time -p ./mycp in3.txt out.txt 1024000
md5sum in3.txt out.txt

rm out.txt

time -p ./mycp in4.txt out.txt 10240000
md5sum in4.txt out.txt

rm out.txt

time -p ./mycp in5.txt out.txt 102400000
md5sum in5.txt out.txt
