with import <nixpkgs> { };

mkShell {
  nativeBuildInputs = [
    libdrm
    libinput
    libGL
    libinput
    libxkbcommon
    louvre
    pkg-config
    pixman
    wayland
    meson
    ninja
  ];

  LD_LIBRARY_PATH = lib.makeLibraryPath [
    libdrm
    libGL
    libinput
    libxkbcommon
    louvre
    pixman
    wayland
  ];
}
