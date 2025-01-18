# Memory-Game
A small memory game using arduino for entertainment purpose.
# Memory Game using Arduino

This project is a memory game built using Arduino, where users need to remember and replicate a random sequence of blinking lights. The game provides feedback with an RGB LED and a buzzer to indicate a win or loss.

---

## Features

- **Random Light Sequence**: Lights blink in a randomly generated sequence.
- **User Input**: Players input the sequence using buttons corresponding to the lights.
- **Feedback Mechanism**:
  - **Win**: RGB LED turns green, and the buzzer plays a winning sound.
  - **Loss**: RGB LED turns red, and the buzzer announces a failure.

---

## Components Used

1. **Arduino Uno**
2. **Push Buttons (4)**
3. **LEDs (4)**
4. **RGB LED**
5. **Buzzer**
6. **Resistors**
7. **Breadboard**
8. **Jumper Wires**

---

## Circuit Diagram

Refer to the image included in this repository for the wiring diagram. Ensure all connections are secure before running the code.

---

## Code

The Arduino code for the game is included in the `Memory_game_code.ino` file. It handles the following:

- Generating a random light sequence.
- Detecting user button inputs.
- Providing feedback via the RGB LED and buzzer.

---

## How to Play

1. Turn on the Arduino.
2. Observe the random sequence of blinking LEDs.
3. Use the buttons to replicate the sequence.
4. If the sequence is correct, the RGB LED turns green, and you win!
5. If the sequence is incorrect, the RGB LED turns red, and you lose.

---

## Setup Instructions

1. Assemble the circuit as per the circuit diagram.
2. Connect the Arduino to your computer via USB.
3. Upload the `memory_game.ino` code to the Arduino using the Arduino IDE.
4. Power the Arduino and start playing!

---

## Future Enhancements

- Add difficulty levels with longer sequences.
- Include a timer to increase the challenge.
- Add a scoreboard to track player performance.

---

## License

This project is open-source and available under the MIT License. Feel free to use and modify the code for your projects.

---

## Contribution

Contributions are welcome! Feel free to open issues or submit pull requests with improvements or new features.

