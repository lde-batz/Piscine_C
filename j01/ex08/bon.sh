#!/bin/sh

ldapsearch -xLLL | grep "^sn" | grep "BON" | wc -l | bc

