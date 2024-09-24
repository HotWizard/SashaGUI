if [ -d ".vscode" ]; then
    rm -rf .vscode
fi

mkdir .vscode
bear --output .vscode/compile_commands.json -- xmake f --toolchain=gcc-14 -c