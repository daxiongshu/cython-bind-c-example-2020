import justatest.hi_library_from_cpp as cpp_hi
cpp_hi.say_hi_to_yingshaoxo()
cpp_hi.give_me_a_bytes_string(b"fine")
cpp_hi.give_me_a_string("you are good")
cpp_hi.give_me_a_list_of_string(["1", "2", "3"])
cpp_hi.give_me_a_list_of_integer([1, 2, 3])
r = cpp_hi.split_int_list([1,1,2,2,2,3,3,3])
for i in r:
    print(i)

print("\n-------\n")

import justatest.hi_library_from_python as py_hi
py_hi.say_something()
