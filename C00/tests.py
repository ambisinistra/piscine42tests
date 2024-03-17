import os
import subprocess

folder = "../.."

norm_check = subprocess.check_output(f'norminette "{folder}"', shell=True).decode('utf-8')

if not set([line_[-3:] for line_ in norm_check.split('\n')]) - {"", "OK!"}:
    print ("Norminette check OK!", end="\n\n")
else:
    print (norm_check)

possible_dirs = set(["ex0" + str(i) for i in range(9)])
dirs_we_have = []

for filename_ in sorted(os.listdir(folder)):
    if filename_ in possible_dirs:
        dirs_we_have.append(filename_)

print (dirs_we_have)
