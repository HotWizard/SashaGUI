{
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-std=c++23",
            "-DNDEBUG"
        }
    },
    files = {
        "src/RGB.cpp"
    },
    depfiles_gcc = "RGB.o: src/RGB.cpp src/../include/RGB.hpp\
"
}