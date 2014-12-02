################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../gtest/samples/sample1.cc \
../gtest/samples/sample10_unittest.cc \
../gtest/samples/sample1_unittest.cc \
../gtest/samples/sample2.cc \
../gtest/samples/sample2_unittest.cc \
../gtest/samples/sample3_unittest.cc \
../gtest/samples/sample4.cc \
../gtest/samples/sample4_unittest.cc \
../gtest/samples/sample5_unittest.cc \
../gtest/samples/sample6_unittest.cc \
../gtest/samples/sample7_unittest.cc \
../gtest/samples/sample8_unittest.cc \
../gtest/samples/sample9_unittest.cc 

CC_DEPS += \
./gtest/samples/sample1.d \
./gtest/samples/sample10_unittest.d \
./gtest/samples/sample1_unittest.d \
./gtest/samples/sample2.d \
./gtest/samples/sample2_unittest.d \
./gtest/samples/sample3_unittest.d \
./gtest/samples/sample4.d \
./gtest/samples/sample4_unittest.d \
./gtest/samples/sample5_unittest.d \
./gtest/samples/sample6_unittest.d \
./gtest/samples/sample7_unittest.d \
./gtest/samples/sample8_unittest.d \
./gtest/samples/sample9_unittest.d 

OBJS += \
./gtest/samples/sample1.o \
./gtest/samples/sample10_unittest.o \
./gtest/samples/sample1_unittest.o \
./gtest/samples/sample2.o \
./gtest/samples/sample2_unittest.o \
./gtest/samples/sample3_unittest.o \
./gtest/samples/sample4.o \
./gtest/samples/sample4_unittest.o \
./gtest/samples/sample5_unittest.o \
./gtest/samples/sample6_unittest.o \
./gtest/samples/sample7_unittest.o \
./gtest/samples/sample8_unittest.o \
./gtest/samples/sample9_unittest.o 


# Each subdirectory must supply rules for building sources it contributes
gtest/samples/%.o: ../gtest/samples/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/bryan/Programming/CPPWorkspace/LinkedList/gtest/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


