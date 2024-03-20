from ..utils import compile_with_testcode

exercises = ["ex0" + str(i) for i in range(3)]
filenames = ["ft_strcpy.c", "ft_strncpy.c", "ft_str_is_alpha.c"]

for exer_, file_ in zip(exercises, filenames):
    print (compile_with_testcode("../..", exer_, file_, "source_files"))
