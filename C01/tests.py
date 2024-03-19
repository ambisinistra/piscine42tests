import os
import subprocess

def compile_with_testcode(root, dirname, filename, sourcedir):
    if True:
        with open(f"{dirname} {filename[:-1]+'h'}", "r") as f:
            head_ = f.read()
    #except:
    #    head_ = ""
    with open(f"{dirname} {filename}", "r") as f:
        tail_ = f.read()
    
    source_file_in = os.path.join(root, dirname, filename)
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

    return output_


print (compile_with_testcode("../..", "ex00", "ft_ft.c", "source_files"))
print (compile_with_testcode("../..", "ex01", "ft_ultimate_ft.c", "source_files"))
