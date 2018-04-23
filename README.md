# AwesomeRenderer

run cmd commond 

```
git clone https://github.com/yoyo-sincerely/AwesomeRenderer.git
cd AwesomeRenderer
git submodule init
git submodule update

mkdir build
cd build
```
in win32, run:
```
cmake ..
```

in win64, run:
```
cmake -G "Visual Studio 15 2017 Win64" ..
```

- G-Buffer structure

![](https://github.com/yoyo-sincerely/MyPic/blob/master/PBR/GBuffer_data_structure.png?raw=true)

## Features

- Camera
	- Movements(�ƶ�)
	- Zoom in/out(�Ŵ�/��С)
	- Exposure(�ع�) :
		- Aperture(��Ȧ)
		- Shutter speed(��������)
		- ISO(�й��)
- Texture
	- Init/loading/binding by stb library
	- Anisotropic Filtering(����������ɢ�˲�)
	- HDR
	- Cubemap
- Material
	- PBR material pipeline
		- Albedo
		- Normal
		- Roughness
		- Matelness
		- AO
- Model
	- 

## Dependencies

in 3rdpart file:

- Window & Input system : GLFW
- OpenGL Function Loader : GLAD
- OpenGL Mathematic Functions : GLM
- Image Loading : stb
- Mesh Loading : Assimp

