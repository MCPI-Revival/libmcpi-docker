#ifndef EXTRA_H

#define EXTRA_H

#ifndef GLFW_RAW_MOUSE_MOTION
#define GLFW_RAW_MOUSE_MOTION 0x00033005
#endif /* GLFW_RAW_MOUSE_MOTION */

#ifdef __cplusplus
extern "C" {
#endif

int has_feature(const char *name);

void key_press(char key);
void clear_input();

#ifdef __cplusplus
}
#endif

#endif
