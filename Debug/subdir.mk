################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../GUI.cpp \
../GameWorld.cpp \
../Scene.cpp \
../main.cpp 

OBJS += \
./GUI.o \
./GameWorld.o \
./Scene.o \
./main.o 

CPP_DEPS += \
./GUI.d \
./GameWorld.d \
./Scene.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


