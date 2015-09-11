import sys

for i in sys.stdin:
    if i[1:3] == "0x":
        num = int(i[1:5], 16)
        i = i[0:3] + ("%02X" % (num * 4)) + i[5:]
    print i,
