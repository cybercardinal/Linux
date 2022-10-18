#!/bin/bash
while(true)
do
echo "Parent"
sleep 1
/bin/bash ./Child.sh &
done
