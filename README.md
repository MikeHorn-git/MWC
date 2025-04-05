# MWC

Minimalist Wayland Compositor.
Based on [Louvre](https://github.com/CuarzoSoftware/Louvre/tree/main).

## Requirements

### Build System

* Meson
* Ninja

### Librairies

* Louvre
* Wayland
* Weston

### Arch

```bash
yay -S meson ninja louvre weston
```

## Build

```bash
git clone https://github.com/MikeHorn-git/MWC.git
cd MCW/
meson setup build
cd build/
meson compile
```

## Nix

For non-NixOS users use [nixGL](https://github.com/nix-community/nixGL) to launch ```mwc```.

```bash
git clone https://github.com/MikeHorn-git/MWC.git
cd MCW/
nix-shell
meson setup build
cd build/
meson compile
exit
nixGL build/mwc
```

## Credits

* [LouvreTemplate](https://github.com/CuarzoSoftware/LouvreTemplate)
