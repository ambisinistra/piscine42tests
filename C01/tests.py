import os
import subprocess

def compile_with_testcode(root, dirname, filename):
    if True:
        with open(f"{dirname} {filename[:-1]+'h'}", "r") as f:
            head_ = f.read()
    #except:
    #    head_ = ""
    with open(f"{dirname} {filename}", "r") as f:
        tail_ = f.read()
    
    source_file = os.path.join(root, dirname, filename)
    with open(source_file, 'r+') as f:
        content = f.read()
        f.seek(0, 0)
        f.write(head_.rstrip('\r\n') + '\n' + content + '\n' + tail_)

    print (type(source_file))
    print (source_file)
    gcc_command = ["gcc", "-Wall", "-Wextra", "-Werror", "-o", "my_program", source_file]
    try:
        subprocess.run(gcc_command, check=True)
        print("Compilation successful")
    except subprocess.CalledProcessError as e:
        print("Compilation failed:", e)
        
    output_ = subprocess.check_output("./my_program", shell=True)

    return output_

print (compile_with_testcode("../..", "ex00", "ft_ft.c"))
