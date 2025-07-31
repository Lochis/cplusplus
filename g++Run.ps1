param([string]$name)
g++ "$name.cpp" -o "$name.exe" -g -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++23
if ($LASTEXITCODE -eq 0) {
    & .\$name
    }
