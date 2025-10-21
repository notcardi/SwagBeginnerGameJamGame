project('sdldemo', 'c', default_options: 'default_library=static')

sdl_dep = dependency('sdl3')
sdl_image_dep = dependency('sdl3_image')



executable('gamejamgame', ['src/main.c', 'src/game.c'], dependencies: [sdl_dep, sdl_image_dep])