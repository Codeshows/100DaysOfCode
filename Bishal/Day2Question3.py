# Opening a New File
file = open("Text.txt", "w+")
for i in range(10):
    file.write(str(i+1) + ". Hello World! It's me.\nI'm here to learn something new.\n")
file.close()

# Appending
f = open("Text.txt", "a")
f.write("Yo!")
f.close()

# Opening the file back up and read the contents
f = open("Text.txt", "r")
if f.mode == 'r':
    contents = f.read()
    print(contents)
