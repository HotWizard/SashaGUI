{
    files = {
        "src/SashaGUI.cpp"
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
    depfiles_gcc = "SashaGUI.o: src/SashaGUI.cpp src/../include/SashaGUI.hpp  src/../include/RGBA.hpp src/../include/vector.hpp  src/../include/../src/vector.inl\
"
}