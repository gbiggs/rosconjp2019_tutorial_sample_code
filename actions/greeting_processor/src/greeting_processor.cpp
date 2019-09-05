#include <rclcpp/rclcpp.hpp>
#include <memory>

#include "greeting_processor/greeting_processor_component.hpp"

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  auto node = std::make_shared<greeting_processor::GreetingProcessor>(options);
  node->make_action_server();
  rclcpp::spin(node);
  rclcpp::shutdown();
}
