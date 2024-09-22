add_rules("mode.release", "mode.debug")
add_languages("c++23")

target("test")
    add_files("*.cpp")
    add_includedirs
    (
        "../include",
        "glfw-3.4/include"
    )
    add_linkdirs
    (
        "../build/linux/x86_64/release",
        "glfw-3.4/lib"
    )
    add_links
    (
        "SashaGUI",
        "glfw3",
        "GL"
    )