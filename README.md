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

<!--![](https://github.com/yoyo-sincerely/MyPic/blob/master/PBR/GBuffer_data_structure.png?raw=true)-->

| RT && Channel | Red | Green | Blue | Alpha |
| - | - | - | - | - |
| RT0 | ViewPosition.X | ViewPosition.Y | ViewPosition.Z | Depth |
| RT1 | Albedo.R | Albedo.G | Albedo.B | Roughness |
| RT2 | Normal.R | Normal.G | Normal.B | Matelness | 
| RT3 | AO | Velocity.R | Velocity.G | 
 

## How To Use

## Dependencies

in 3rdpart file:

- Window & Input system : GLFW
- OpenGL Function Loader : GLAD
- OpenGL Mathematic Functions : GLM
- Image Loading : stb
- Mesh Loading : Assimp


## Credits 

- PBRT
- Joshua Senouf
- Cao Jiayin
