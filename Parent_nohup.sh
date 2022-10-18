#!/bin/bash
while(true)
do
echo "Parent"
sleep 1
nohup /bin/bash ./Child.sh &
done
