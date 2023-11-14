#include <stdio.h>
#include <turtle.h>

int main() {
  // Define a turtle object.
  Turtle turtle;

  // Set the turtle's initial position and direction.
  turtle.x = 100;
  turtle.y = 100;
  turtle.direction = 0;

  // Draw a square using the turtle's `move()` and `turn()` methods.
  for (int i = 0; i < 4; i++) {
    turtle.move(100);
    turtle.turn(90);
  }

  // Display the drawing.
  display();

  return 0;
}