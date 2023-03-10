#!/bin/bash

# Prompt the user to enter the name of the output archive file
read -p "Please enter the name of the output archive file: " archive_name

# Create an empty archive file
ar -rcs "$archive_name"

# Loop through all .o files in the current directory
for file in *.o
do
    # Check if the file exists
    if [ ! -e "$file" ]
    then
        # If the file does not exist, add it to the archive
        ar -q "$archive_name" "$file"
        echo "Archived $file"
    fi
done

echo "Done archiving missing .o files."
