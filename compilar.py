#!/usr/bin/env python3

"""
Compile the C files of the aulas of the given number
"""

import subprocess
import sys
import os
from unicodedata import unidata_version

if len(sys.argv) < 2:
    # check if was passed argument
    print("usage: ", sys.argv[0], " <aula> [unidade]")
    sys.exit()
elif not sys.argv[1].isdigit():
    # check if is digit
    print("usage: ", sys.argv[0], " <aula> [unidade]")
    sys.exit()

aula = sys.argv[1]
try:
    unidade = sys.argv[2] if sys.argv[2].isdigit() else 1
except IndexError:
    unidade = 1

os.chdir('unidade'+str(unidade))
dirlist = os.listdir()

# search for the files to compile
for file in dirlist:
    if file.find('aula'+aula.zfill(2)) > -1 and file.find('.c') > -1:
        filepath = os.path.abspath(file)
        print("Compiling "+file+"...")
        # send the compiler command to shell
        subprocess.run("gcc "+filepath+" -o "+filepath.replace(".c", ".bin"), shell=True)
