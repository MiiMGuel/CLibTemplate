# CLibTemplate
a C library template with CMake

# Adding Dependencies
`git submodule add <git_repo_https> vendor/repo_name`

# CMake Options :
- `BUILD_SHARED_LIBS` : TRUE, FALSE

# CMake Commands :
- generate : `cmake -S . -B build -G Ninja`
- build    : `cmake --build build --config <debug, release>`