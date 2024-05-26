Video base:
https://www.youtube.com/watch?v=OGlH70nJplA&list=PLspDyukWAtRU6CExohVFg07T98ssxdqy1&index=12&t=662s

Github necessarios de serem instalados como ros packeges:
https://github.com/adityakamath/akros2_msgs

https://github.com/adityakamath/akros2_teleop


Comando para conectar o controle ao ros:

```
ros2 run joy joy_node
```

Comando para trasnformar os dados da coneccao em twist :

```
ros2 launch teleop_twist_joy teleop-launch.py
joy_config:='ps3'

```

