# CMakeList.txt: проект CMake для Tree; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("Tree")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Tree "Tree.cpp" "BinaryTree.h" "BinaryTree.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
