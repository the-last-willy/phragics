#version 450 core

layout(location = 0) in vec3 in_position;

void main() {
    gl_Position = vec4(in_position, 1.);
}
