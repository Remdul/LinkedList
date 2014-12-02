################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest/codegear/gtest_all.cc \
../gtest/codegear/gtest_link.cc 

CC_DEPS += \
./gtest/codegear/gtest_all.d \
./gtest/codegear/gtest_link.d 

OBJS += \
./gtest/codegear/gtest_all.o \
./gtest/codegear/gtest_link.o 


# Each subdirectory must supply rules for building sources it contributes
gtest/codegear/%.o: ../gtest/codegear/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/bryan/Programming/CPPWorkspace/LinkedList/gtest/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


