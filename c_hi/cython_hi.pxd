from libcpp.string cimport string
from libcpp.vector cimport vector

cdef extern from 'hi.hpp':
    void yingshaoxo();
    void take_a_bytes_string(const char text[]);
    void take_another_bytes_string(string text);
    void take_an_string_array(vector[string] text_array);
    void take_an_int_array(vector[int] int_array);
    vector[vector[int]] split_int_array(vector[int] int_array);
