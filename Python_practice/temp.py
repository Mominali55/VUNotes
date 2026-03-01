import time

# 1. Get current time in seconds (float)
seconds = time.time() #this return a float value representing seconds since the epoch (January 1, 1970)

# 2. Convert to milliseconds (multiply by 1000) and remove decimals (int)
milliseconds = int(seconds * 1000)

print("Current time in milliseconds:", milliseconds)