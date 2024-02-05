#!/bin/bas

find ./ -type f -name *'42' -size 42c -exec grep -q "42" {} \; -print  
