n = int(input())

best_id = -1
best_dist = 999999

for i in range(n):
    line = input()
    part = line.split()
    sid = int(part[0])
    dist = int(part[1])
    if dist < best_dist or(dist == best_dist and sid <best_id):
        best_id = sid
        best_dist = dist

print(f"nearest id={best_id} dist={best_dist}")