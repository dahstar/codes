import subprocess
from six import print_

si = None
if hasattr(subprocess, 'STARTUPINFO'):
    si = subprocess.STARTUPINFO()
    si.dwFlags = subprocess.STARTF_USESHOWWINDOW
    si.wShowWindow = subprocess.SW_HIDE

print_(subprocess.Popen(
    ['java', '-cp', 'C:\\Users\\Juan\\Dropbox\\Java\\TCO15', 'SmallPolygons'],
    shell=False,
    bufsize=1,
    stdout=subprocess.PIPE,
    stderr=subprocess.PIPE,
    stdin=subprocess.PIPE,
    universal_newlines=True,
    startupinfo=si).communicate('0\n0\n'))