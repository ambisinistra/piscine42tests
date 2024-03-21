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

    return output_.decode("utf-8")

exercises = ["ex" + str(i//10) + str(i%10) for i in range(13)]
filenames = ["ft_strcpy.c", "ft_strncpy.c", "ft_str_is_alpha.c", "ft_str_is_numeric.c",
             "ft_str_is_lowercase.c", "ft_is_uppercase.c", "ft_is_printable.c",
             "ft_strupcase.c", "ft_strlowcase.c", "ft_strcapitalize.c", "ft_strlcpy.c"
             "ft_putstr_non_printable.c", "ft_print_memory.c"]

for exer_, file_ in zip(exercises, filenames):
    print (compile_with_testcode("../..", exer_, file_, "source_files"))
