// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Spark.h>

#include <frc/Joystick.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

 private:

	// Left
	frc::Spark frontL{0};
	frc::Spark backL{1};

	// Right
	frc::Spark frontR{2};
	frc::Spark backR{3};

	frc::Spark flooper{4};
	frc::Spark spinner{5};
	frc::Spark climber{6};

	frc::Joystick controller{0};
};
