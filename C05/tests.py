import os
import subprocess

def compile_with_testcode(root, dirname, filename, sourcedir):
    source_file_in = os.path.join(root, dirname, filename)
    if not os.path.exists(source_file_in):
        return (f"{filename} not found")
    try:
        with open(f"{dirname} {filename[:-1]+'h'}", "r") as f:
            head_ = f.read()
    except:
        head_ = ""
    with open(f"{dirname} {filename}", "r") as f:
        tail_ = f.read()
    
    with open(source_file_in, 'r+') as f_in:
        content = f_in.read()
        #f_in.seek(0,0)
        #f_in.write(head_.rstrip('\r\n') + '\n' + content + '\n' + tail_)
        if not os.path.exists(sourcedir):
            os.makedirs(sourcedir)
        source_file_out = os.path.join(sourcedir, filename)
        with open(source_file_out, "w") as f_out:
            f_out.write(head_.rstrip('\r\n') + '\n' + content + '\n' + tail_)


    gcc_command = ["gcc", "-Wall", "-Wextra", "-Werror", "-o", "my_program", source_file_out]
    try:
        subprocess.run(gcc_command, check=True)
        print(f"{filename} compilation successful")
    except subprocess.CalledProcessError as e:
        print(f"{filename} compilation failed:", e)
        
    output_ = subprocess.check_output("./my_program", shell=True)

    return output_.decode("utf-8")from .utils import compile_with_testcode

exercises = ["ex0" + str(i) for i in range(8)]
filenames = ["ft_iterative_factorial.c", "ft_recursive_factorial.c", "ft_iterative_power.c",
             "ft_recursive_power.c", "ft_fibonacci.c", "ft_sqrt.c", "ft_is_prime.c",
             "ft_find_next_prime.c"]

for exer_, file_ in zip(exercises, filenames):
    print (compile_with_testcode("../..", exer_, file_, "source_files"))
