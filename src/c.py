import pyperclip, os, sys


string = ''
for i in sys.argv[1:]:
    string += os.path.abspath(i) + " "

pyperclip.copy(string)

