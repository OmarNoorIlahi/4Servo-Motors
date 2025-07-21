# 4Servo-Motors
---
# Table of Contents

- [Overview](#overview)
- [Methods](#methods)
  - [Equipment](#equipment)
  - [Procedure](#procedure)
- [Output](#output)
- [Algorithm](#algorithm)
  - [Warm-Up](#warm-up)
  - [Walking](#walking)
  - [Stop Condition](#stop-condition)
---

## Overview

This is Task Two in the Electrical & Electronics Engineering track, submitted to Smart Methods Company for 2025 Summer Internship. This task presents an integrated circuit controlled by Arduino to run four sweep servo motors for 2 seconds and then hold them at 90 degrees. Additionally, a theoretical algorithm is provided to initiate motion for a walking humanoid robot.
---

## Methods

First, the main environment is Tinkercad as this program provides the required tools for the task, and Arduino Ide to program the code. The Arduino Ide provides two examples of servo motors: Knob and Sweep. In this task, the circuit and code are only applicable for Sweep circuit.

### Equipment

| Component      | Quantity      |
| -------------- | ------------ |
| Breadboard     | 1            |
| Arduino UNO    | 1            |
| Servo Motor    | 4            |
| Wires          | more than 10 |

### Procedure

- Connect the ground (GND) from the Arduino to the negative rail (Ground) on the breadboard.
- Connect the power supply (5v) from the Arduino to the positive rail on the breadboard.
- Connect the ground pin from each servo motor to the negative rail (Ground) on the breadboard.
- Connect the power pin from each servo motor to the positive rail on the breadboard.
- Connect the signal pin from each servo to Arduino’s digital pins (D7, D6, D5, D4) respectively.
- Write and upload the code using Arduino IDE and simulate it in Tinkercad.

> **Note:** The circuit should be like the following figure & the code is attached as a separate file in the repository.

<p align="center">
  <img src="Initial State.png" alt="Initial State of the Circuit" width="500"/>
</p>
<p align="center"><i>Figure 1: Initial State of the Circuit</i></p>
---

## Output

<p align="center">
  <img src="Final State.png" alt="Final State of the Circuit" width="500"/>
</p>
<p align="center"><i>Figure 2: Final State of the Circuit</i></p>

Figure 2 shows the output of the simulation as the motors swept from 0 to 180 degrees and draw back for a time duration of 2 seconds. After one full sweeping cycle, the motors hold at 90 degrees and stop looping.

---

## Algorithm

This section includes a theoretical description of how the humanoid robot initiates motion for walking. The description is based on a proof of concept, excluding mathematical and engineering design details. The algorithm consists of three stages, starting from warm-up, going through a walking stage, and ending up with stop condition.

### Warm-Up

- Set initial positions of legs and arms. For illustration, the legs are standing straight, and the arms are positioned for balance.
- Identify motion parameters like step, distance covered, speed, and acceleration with respect to time.

### Walking

- Begin with swing phase by bending the knee and rotating the hip of one leg (right or left) over another off the ground.
- Prepare to stand through a stance phase, placing the heel of one leg on the ground first.
- The stance phase transfers the center of gravity from one leg to the other to ensure balancing and prevent downfall of the robot.
- Repeat and continue walking to achieve the required function.

### Stop Condition

- Once the function is done, the robot returns to the standing upright position.
