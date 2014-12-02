################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest/src/gtest-all.cc \
../gtest/src/gtest-death-test.cc \
../gtest/src/gtest-filepath.cc \
../gtest/src/gtest-port.cc \
../gtest/src/gtest-printers.cc \
../gtest/src/gtest-test-part.cc \
../gtest/src/gtest-typed-test.cc \
../gtest/src/gtest.cc \
../gtest/src/gtest_main.cc 

CC_DEPS += \
./gtest/src/gtest-all.d \
./gtest/src/gtest-death-test.d \
./gtest/src/gtest-filepath.d \
./gtest/src/gtest-port.d \
./gtest/src/gtest-printers.d \
./gtest/src/gtest-test-part.d \
./gtest/src/gtest-typed-test.d \
./gtest/src/gtest.d \
./gtest/src/gtest_main.d 

OBJS += \
./gtest/src/gtest-all.o \
./gtest/src/gtest-death-test.o \
./gtest/src/gtest-filepath.o \
./gtest/src/gtest-port.o \
./gtest/src/gtest-printers.o \
./gtest/src/gtest-test-part.o \
./gtest/src/gtest-typed-test.o \
./gtest/src/gtest.o \
./gtest/src/gtest_main.o 


# Each subdirectory must supply rules for building sources it contributes
gtest/src/%.o: ../gtest/src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/bryan/Programming/CPPWorkspace/LinkedList/gtest/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


