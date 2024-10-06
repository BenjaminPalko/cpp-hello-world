#include <GL/glew.h>
#include <linmath.h>
#include <string>

class ShaderSystem {
  GLuint vertex_buffer;
  GLuint program;
  GLint mvp_location;
  GLint vpos_location;
  GLint vcol_location;
  GLuint vertex_array;

public:
  ShaderSystem();
  int Draw(int width, int height, float time);
  GLuint *CreateBuffer();
};

class Shader {
public:
  Shader(GLuint shader);

protected:
  GLuint shader;

public:
  void SetSource(std::string source);
  void SetSource(const char *source);
  void Compile();
  void Attach(GLuint program);
};

class VertexShader : public Shader {
public:
  VertexShader();
};

class FragmentShader : public Shader {
public:
  FragmentShader();
};
