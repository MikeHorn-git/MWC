project(
    'MWC',
    'c','cpp',
    version : '0.1.0',
    meson_version: '>= 1.2.3',
    default_options: [
        'warning_level=2',
        'cpp_std=c++20',
        'buildtype=release',
    ]
)
 
libdrm_dep = dependency('libdrm')
libinput_dep = dependency('libinput')
louvre_dep = dependency('Louvre')
pixman_dep = dependency('pixman-1')
 
# List C/C++ source files stored in ./src
sources = run_command('find', './src', '-type', 'f', '-name', '*[.c,.cpp,.h,.hpp]', check : false).stdout().strip().split('\n')
 
executable(
    'mwc',
    sources : sources,
    dependencies : [
        libdrm_dep,
        libinput_dep,
        louvre_dep,
        pixman_dep,
])
