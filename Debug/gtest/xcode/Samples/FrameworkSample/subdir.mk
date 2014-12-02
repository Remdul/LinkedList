################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest/xcode/Samples/FrameworkSample/widget.cc \
../gtest/xcode/Samples/FrameworkSample/widget_test.cc 

CC_DEPS += \
./gtest/xcode/Samples/FrameworkSample/widget.d \
./gtest/xcode/Samples/FrameworkSample/widget_test.d 

OBJS += \
./gtest/xcode/Samples/FrameworkSample/widget.o \
./gtest/xcode/Samples/FrameworkSample/widget_test.o 


# Each subdirectory must supply rules for building sources it contributes
gtest/xcode/Samples/FrameworkSample/%.o: ../gtest/xcode/Samples/FrameworkSample/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/bryan/Programming/CPPWorkspace/LinkedList/gtest/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


