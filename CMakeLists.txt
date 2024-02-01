cmake_minimum_required(VERSION 3.24)
project(Liner_List)

set(CMAKE_CXX_STANDARD 17)

add_executable(Liner_List Sequence_List/Create_SL.cpp Sequence_List/Create_SL.h Sequence_List/Inserting_Element.h Sequence_List/Delet_Element.h Sequence_List/Search_by_value.h Sequence_List/Search_by_order.h)
