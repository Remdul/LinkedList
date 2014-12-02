################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest/fused-src/gtest/gtest-all.cc \
../gtest/fused-src/gtest/gtest_main.cc 

CC_DEPS += \
./gtest/fused-src/gtest/gtest-all.d \
./gtest/fused-src/gtest/gtest_main.d 

OBJS += \
./gtest/fused-src/gtest/gtest-all.o \
./gtest/fused-src/gtest/gtest_main.o 


# Each subdirectory must supply rules for building sources it contributes
gtest/fused-src/gtest/%.o: ../gtest/fused-src/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/bryan/Programming/CPPWorkspace/LinkedList/gtest/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


