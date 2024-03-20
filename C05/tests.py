from ..utils import compile_with_testcode

exercises = ["ex0" + str(i) for i in range(8)]
filenames = ["ft_iterativet_factorial.c", "ft_recursive_factorial.c", "ft_iterative_power.c",
             "ft_recursive_power.c", "ft_fibonacci.c", "ft_sqrt.c", "ft_is_prime.c",
             "ft_find_next_prime.c"]

for exer_, file_ in zip(exercises, filenames):
    print (compile_with_testcode("../..", exer_, file_, "source_files"))
