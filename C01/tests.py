from ..utils import compile_with_testcode

exercises = ["ex0" + str(i) for i in range(9)]
filenames = ["ft_ft.c", "ft_ultimate_ft.c", "ft_swap.c", "ft_div_mod.c",
             "ft_ultimate_div_mod.c", "ft_putstr.c", "ft_strlen.c",
             "ft_rev_int_tab.c", "ft_sort_int_tab.c"]

for exer_, file_ in zip(exercises, filenames):
    print (compile_with_testcode("../..", exer_, file_, "source_files"))
