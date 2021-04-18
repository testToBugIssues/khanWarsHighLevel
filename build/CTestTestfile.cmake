# CMake generated Testfile for 
# Source directory: /home/joao/Área de Trabalho/C
# Build directory: /home/joao/Área de Trabalho/C/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[findUsernameAndPassword]=] "/home/joao/Área de Trabalho/C/build/main")
set_tests_properties([=[findUsernameAndPassword]=] PROPERTIES  ENVIRONMENT "KHANWARS_USERNAME=petrolifero;KHANWARS_PASSWORD=123" _BACKTRACE_TRIPLES "/home/joao/Área de Trabalho/C/CMakeLists.txt;25;add_test;/home/joao/Área de Trabalho/C/CMakeLists.txt;0;")
add_test([=[dontFindUsernameOrPassword]=] "/home/joao/Área de Trabalho/C/build/main")
set_tests_properties([=[dontFindUsernameOrPassword]=] PROPERTIES  WILL_FAIL "true" _BACKTRACE_TRIPLES "/home/joao/Área de Trabalho/C/CMakeLists.txt;29;add_test;/home/joao/Área de Trabalho/C/CMakeLists.txt;0;")
subdirs("api")
subdirs("user")
subdirs("console")
