#include "Global.h"
#include "../Compositor.h"

Scene &G::scene() noexcept
{
	return compositor()->scene;
}

LayerView *G::layers() noexcept
{
	return scene().layers;
}
