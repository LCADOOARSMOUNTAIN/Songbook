import os
import re

directory = r'F:\Audios for SB\From Brother Jerome\Selected Songs'

pattern = re.compile(r'\D+(\d+)\.mp3')

numbers = []

for filename in os.listdir(directory):
    filepath = os.path.join(directory, filename)
    if os.path.isfile(filepath) and filepath.lower().endswith('.mp3'):
        match = pattern.match(filename)
        if match:
            number = int(match.group(1))
            numbers.append(number)

print(numbers)
