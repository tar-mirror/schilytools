h38052
s 00001/00001/00014
d D 1.2 15/06/03 00:06:44 joerg 2 1
c ../common/test-common -> ../../common/test-common
e
s 00015/00000/00000
d D 1.1 10/05/03 03:11:28 joerg 1 0
c date and time created 10/05/03 03:11:28 by joerg
e
u
U
f e 0
f y 
t
T
I 1
#! /bin/sh

# y2k.sh:  Y2K tests for the "val" command.

# Import common functions & definitions.
D 2
. ../common/test-common
E 2
I 2
. ../../common/test-common
E 2

files="f s.f"

remove $files

docommand y1 "${vg_val} ../year-2000/s.y2k.txt" 0 IGNORE IGNORE

remove $files
success
E 1
