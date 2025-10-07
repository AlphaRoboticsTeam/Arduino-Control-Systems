//---------------------------
// P controller class
//---------------------------

class PController {
private:
  float Kp;
  float target;
public:
  PController(float _target, float _kp) {
    target = _target;
    Kp = _kp;
  }
  float compute(float measured) {
    float error = target - measured;
    return Kp * error;
  }
};

//---------------------------
// PI Controller Class
//---------------------------
class PIController {
private:
  float Kp, Ki;
  float target;
  float integral;
public:
  PIController(float _target, float _kp, float _ki) {
    target = _target;
    Kp = _kp;
    Ki = _ki;
    integral = 0;
  }
  float compute(float measured) {
    float error = target - measured;
    integral += error;
    return (Kp * error) + (Ki * integral);
  }
};

//---------------------------
// PD Controller Class
//---------------------------
class PDController {
private:
  float Kp, Kd;
  float target;
  float prevError;
public:
  PDController(float _target, float _kp, float _kd) {
    target = _target;
    Kp = _kp;
    Kd = _kd;
    prevError = 0;
  }
  float compute(float measured) {
    float error = target - measured;
    float derivative = error - prevError;
    return (Kp * error) + (Kd * derivative);
  }
};

//---------------------------
// PID Controller Class
//---------------------------
class PIDController {
private:
  float Kp, Ki, Kd;
  float target;
  float integral;
  float prevError;
public:
  PIDController(float _target, float _kp, float _ki, float _kd) {
    target = _target;
    Kp = _kp;
    Ki = _ki;
    Kd = _kd;
    integral = 0;
    prevError = 0;
  }
  float compute(float measured) {
    float error = target - measured;
    integral += error;
    float derivative = error - prevError;
    return (Kp * error) + (Ki * integral) + (Kd * derivative);
  }
};
