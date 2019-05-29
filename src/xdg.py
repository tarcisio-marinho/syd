import os, sys
try:
    os.system('xdg-open ' + sys.argv[1])
except:
    pass