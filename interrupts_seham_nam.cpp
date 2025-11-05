#include "interrupts.cpp"
#include "interrupts_seham_nam.hpp"

auto test1 = system("./interrupts 'input_files/trace_1.txt' 'input_files/vector_table.txt' 'input_files/device_table.txt' 'input_files/external_files_1.txt'");
auto test2 = system("./interrupts 'input_files/trace_2.txt' 'input_files/vector_table.txt' 'input_files/device_table.txt' 'input_files/external_files_2.txt'");
auto test3 = system("./interrupts 'input_files/trace_3.txt' 'input_files/vector_table.txt' 'input_files/device_table.txt' 'input_files/external_files_3.txt'");
auto test4 = system("./interrupts 'input_files/trace_4.txt' 'input_files/vector_table.txt' 'input_files/device_table.txt' 'input_files/external_files_4.txt'");
auto test5 = system("./interrupts 'input_files/trace_5.txt' 'input_files/vector_table.txt' 'input_files/device_table.txt' 'input_files/external_files_5.txt'");