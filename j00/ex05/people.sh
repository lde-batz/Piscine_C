#!/bin/sh

ldapsearch -xLLL "cn=z*" cn | grep "^cn" | sort -rf | cut -c5-

