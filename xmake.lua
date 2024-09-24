add_rules("mode.debug", "mode.release")
add_languages("c++23")

target("SashaGUI")
    set_kind("static")
    add_files("src/*.cpp")
    add_links("GL")