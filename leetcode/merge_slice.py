num = int(input())
lines = []
for _ in range(num):
    line = input()
    line = line.split(" ")
    lines.append((int(line[0]), int(line[1])))
                 
# print(lines)
lines.sort(key = lambda e: e[0])

gstart = lines[0][0]
gend = lines[0][1]
count = 1
for start, end in lines[1:]:
    if start <= gend:
        gend = end
        count += 1

if count == len(lines):
    print("%d %d"%(gstart, gend))
else:
    print("no")