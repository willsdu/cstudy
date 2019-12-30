#!/bin/sh

newip='192.168.1.100.c'
reg='\.c$'
if [[ "$newip" =~ $reg ]];then
    echo '找到了ip地址'
fi


