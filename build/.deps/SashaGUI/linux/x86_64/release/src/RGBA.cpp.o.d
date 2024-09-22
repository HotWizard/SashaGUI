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
        "src/RGBA.cpp"
    },
    depfiles_gcc = "RGBA.o: src/RGBA.cpp src/../include/RGBA.hpp\
"
}