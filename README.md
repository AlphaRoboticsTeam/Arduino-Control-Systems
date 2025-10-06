# Control systems overview   
### this documents explains the fundamental classical control algorithms used in robotics and automation-focusing on how they process error signals to stabiliz or control system.
- P (Proportional)
- PI (Proportional-Integral)
- PD (Proportional-Derivative)
- PID (Proportional-Integral-Derivative)

## ⚖️ Comparison of Controller Advantages and Disadvantages
| Controller | Advantages | Disadvantages |
|-------------|-------------|----------------|
| *P (Proportional) | ⚡ Simple and easy to implement<br>⚙️ Fast response to changes<br>🧩 Requires minimal tuning | ❌ Cannot eliminate steady-state error<br>📉 May cause oscillation or overshoot<br>🔊 Sensitive to system gain variations |
| PI (Proportional + Integral) | ✅ Eliminates steady-state error<br>🔄 Smooth and stable output<br>📈 Improves accuracy for constant disturbances | 🐢 Slower response than P<br>⚠️ May introduce overshoot<br>🧮 Integral term can cause “windup” if not limited |
| PD (Proportional + Derivative) | 🚀 Faster and more stable than P<br>🧠 Predicts future error trends<br>📉 Reduces overshoot effectively | ❌ Does not eliminate steady-state error<br>🔊 Very sensitive to measurement noise<br>⚙️ Requires careful tuning of Kd |
| PID (Proportional + Integral + Derivative)* | 🌟 Combines all benefits: fast, accurate, stable<br>🎯 Eliminates steady-state error<br>⚙️ Excellent for most control systems | ⚠️ Harder to tune (3 parameters)<br>💻 Computationally more demanding<br>🧩 Over-tuning can cause instability |

## 1. P Controller (Proportional Control)
the proportional controller produces an output that is directly proportional to the current error between the desired setpoint and sensor value process variable.  

P = Error * Kp
- error : sensor value - setpoint
- Kp : proportional gain

Characteristics.  
- Fast respons
- Simple implementation  
![Function code](https://github.com/AlphaRoboticsTeam/AlphaLibrary/blob/main/photo/board.png) 
