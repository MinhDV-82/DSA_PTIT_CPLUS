seconds = int(input())
minutes = seconds // 60 # sua / -> //
secs = seconds % 60
print(f"{minutes} {secs}")