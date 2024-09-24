{
    files = {
        "src/point.cpp"
    },
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
    depfiles_gcc = "point.o: src/point.cpp src/../include/point.hpp\
"
}