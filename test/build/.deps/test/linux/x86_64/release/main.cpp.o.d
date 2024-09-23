{
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-std=c++23",
            "-I../include",
            "-Iglfw-3.4/include",
            "-DNDEBUG"
        }
    },
    depfiles_gcc = "main.o: main.cpp ../include/RGBA.hpp ../include/SashaGUI.hpp  ../include/RGBA.hpp ../include/vector.hpp ../include/../src/vector.inl  glfw-3.4/include/GLFW/glfw3.h\
",
    files = {
        "main.cpp"
    }
}