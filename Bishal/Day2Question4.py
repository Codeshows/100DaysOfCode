# Working with os.path module
import os
from os import path
import datetime
import time


def main():
    # Printing the name of the oS
    print(os.name)
    print(os.path)


main()

# Check for item existence and type
print("Item exists (Text.txt): "+str(path.exists("Text.txt")))
print("Item is a file (Text.txt): "+str(path.isfile("Text.txt")))
print("Item is a directory (Text.txt): "+str(path.isdir("Text.txt")))
print("Item is a directory (My_File): "+str(path.isdir("My_File")))

# Work with file paths
print("Item path: " + str(path.realpath("Text.txt")))
print("Item path and name: " + str(path.split(path.realpath("Text.txt"))))

# Get the modification time
t = time.ctime(path.getmtime("Text.txt"))
print(t)
print(datetime.datetime.fromtimestamp(path.getctime("Text.txt")))

