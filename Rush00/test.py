import os
import subprocess

rush_dir = "../../ex00"

files_to_check = ["main.c", "ft_putchar.c", "rush0X.c"]
files_we_have  = []
unnecassary_files = []
rush_filename = ""

for filename_ in sorted(os.listdir(rush_dir)):
    if filename_ in files_to_check:
        files_we_have.append(filename_)
    elif (filename_[:5] + filename_[6:]) == "rush0.c":
        files_we_have.append(filename_)
        rush_filename = filename_
    else:
        unnecassary_files.append(filename_)

if unnecassary_files:
    print ("ERROR: these files should be here ", " ".join(unnecassary_files))
elif len(files_we_have) == len(files_to_check):
    print ("files are OK", end="\n\n")
else:
    print ("ERROR: number of files is wrong!")

source_paths = [os.path.join(rush_dir,  file_) for file_ in files_we_have]
gcc_command = ["gcc", "-Wall", "-Wextra", "-Werror", "-o", "my_program"] + source_paths

try:
    subprocess.run(gcc_command, check=True)
    print("Compilation successful")
except subprocess.CalledProcessError as e:
    print("Compilation failed:", e)

