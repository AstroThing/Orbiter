################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Entities/Asteroid.cpp \
../Entities/Bullet.cpp \
../Entities/Entity.cpp \
../Entities/Planet.cpp \
../Entities/PlanetContactListener.cpp \
../Entities/Player.cpp 

OBJS += \
./Entities/Asteroid.o \
./Entities/Bullet.o \
./Entities/Entity.o \
./Entities/Planet.o \
./Entities/PlanetContactListener.o \
./Entities/Player.o 

CPP_DEPS += \
./Entities/Asteroid.d \
./Entities/Bullet.d \
./Entities/Entity.d \
./Entities/Planet.d \
./Entities/PlanetContactListener.d \
./Entities/Player.d 


# Each subdirectory must supply rules for building sources it contributes
Entities/%.o: ../Entities/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


