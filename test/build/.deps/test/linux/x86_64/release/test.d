{
    files = {
        "build/.objs/test/linux/x86_64/release/main.cpp.o"
    },
    values = {
        "/usr/bin/g++",
        {
            "-m64",
            "-L../build/linux/x86_64/release",
            "-Lglfw-3.4/lib",
            "-s",
            "-lSashaGUI",
            "-lglfw3",
            "-lGL"
        }
    }
}