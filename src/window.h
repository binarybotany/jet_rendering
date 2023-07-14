#ifndef JET_RENDERING_WINDOW_H_
#define JET_RENDERING_WINDOW_H_

#define GLFW_INCLUDE_NONE
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <jet/events.h>

#include <string>

namespace jet::rendering {
/**
 * @brief Move to json/ xml/ toml config reader, temp for testing
 */
struct WindowConfiguration {
  int width, height;
  bool fullscreen;
  std::string title;
};

/**
 * @brief This is just for testing the event library
 */
struct KeyPressEvent {
  int keyCode;
};

/**
 * @brief Window using GLFW
 */
class Window {
 public:
  Window(const WindowConfiguration &arWindowConfig);

  ~Window();

  void startUp();

  void shutDown();

  void loop();

  void onKeyPress(void *sender, const KeyPressEvent &event);
};
}  // namespace jet::rendering

#endif