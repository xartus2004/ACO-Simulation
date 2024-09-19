#include <Agent.hpp>
#include "./config.hpp"

Agent::Agent() {
    float theta = glm::linearRand(0.0, 3.14 * 2.0);
    float radius = 0.99;
    float magnitude = glm::linearRand(0.0, 1.0);
    float aspectRatio = float(WINDOW_WIDTH) / float(WINDOW_HEIGHT);
    // position = glm::vec2(sin(theta) * radius * magnitude, cos(theta) * radius * magnitude * aspectRatio);
    position = glm::vec2(0.0f,0.0f);
    // direction = glm::normalize(position);
    float angle = static_cast<float>(rand()) / RAND_MAX * 2.0f * M_PI; // Angle between 0 and 2π
    direction = glm::vec2(cos(angle), sin(angle)); // Set direction based on angle

};