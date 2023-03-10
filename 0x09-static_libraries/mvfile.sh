#!/bin/bash

# Accept file names and target directory path from user
echo "Enter the file names separated by spaces: "
read -a file_names
echo "Enter the target directory path: "
read target_dir

# Loop through the file names and copy them to the target directory
for file_name in "${file_names[@]}"; do
    # Use locate to find the file
    file_path=$(locate -b -n 1 "$file_name")
    # Check if the file was found
    if [ -z "$file_path" ]; then
        echo "Error: $file_name not found in the system"
    else
        # Copy the file to the target directory
        cp "$file_path" "$target_dir"
        echo "$file_name successfully copied to $target_dir"
    fi
done

