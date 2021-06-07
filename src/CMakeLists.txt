file(GLOB src_files "*.cpp" "*.hpp")

# add_library(src gate.cpp gate.hpp and_gate.cpp and_gate.hpp nand_gate.cpp nand_gate.hpp m.cpp m.hpp)
add_library(src ${src_files})
