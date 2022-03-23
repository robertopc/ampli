#!/usr/bin/env python3

"""
Compile the C files of the aulas of the given number
"""

import subprocess
import sys
import os

number = 0

if len(sys.argv) < 2:
    # check if was passed argument
    print("usage: ", sys.argv[0], " <numero-aula>")
    sys.exit()
elif not sys.argv[1].isdigit():
    # check if is digit
    print("usage: ", sys.argv[0], " <numero-aula2>")
    sys.exit()

number = sys.argv[1]

dirlist = os.listdir()

# search for the files to compile
for file in dirlist:
    if file.find('aula'+number.zfill(2)) > -1 and file.find('.c') > -1:
        filepath = os.path.abspath(file)
        print("Compiling "+file+"...")
        # send the compiler command to shell
        subprocess.run("gcc "+filepath+" -o "+filepath.replace(".c", ".bin"), shell=True)
