import os

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

with open(os.path.join(rush_dir, "ft_putchar.h"), "w") as header_:
    header_.write("void ft_putchar(char c);")
with open(os.path.join(rush_dir, (rush_filename[:-1]+'h')), "w") as header_:
    header_.write("void rush(int x, int y);")

include_string = '#include "{}";\n #include "ft_putchar.h";'.format(rush_filename[:-1] + 'h')
with open(os.path.join(rush_dir, "main.c"), "r+") as c_main:
    content = c_main.read()
    c_main.seek(0, 0)
    c_main.write(include_string.rstrip('\r\n') + '\n' + content)
