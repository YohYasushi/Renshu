#!/bin/bash

touch upgradeDame.txt
sudo apt update
sudo apt upgrade > upgradeDame.txt

START=$( grep -ne '以下のパッケージは保留されます:' upgradeDame.txt |  sed -e 's/:.*//g' )
GOAL=$( grep -ne 'アップグレード:' upgradeDame.txt |  sed -e 's/:.*//g' )

START=$(($START + 1))
GOAL=$(($GOAL - 1))

INSCO=$( awk "NR==$START,NR==$GOAL {print}" upgradeDame.txt )

sudo apt install $INSCO