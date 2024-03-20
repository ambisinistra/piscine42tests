from ..utils import compile_with_testcode

exercises = ["ex0" + str(i) for i in range(9)]
filenames = ["ft_putchar.c", "ft_print_alphabet.c", "ft_print_reverse_alphabet.c",
             "ft_print_numbers.c", "ft_is_negative.c", "ft_print_comb.c",
             "ft_print_comb2.c", "ft_putnbr.c", "ft_print_combn"]

for exer_, file_ in zip(exercises, filenames):
    print (compile_with_testcode("../..", exer_, file_, "source_files"))
