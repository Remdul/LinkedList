################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gtest/xcode/Samples/FrameworkSample/subdir.mk
-include gtest/test/subdir.mk
-include gtest/src/subdir.mk
-include gtest/samples/subdir.mk
-include gtest/fused-src/gtest/subdir.mk
-include gtest/codegear/subdir.mk
-include gtest/build/CMakeFiles/gtest_main.dir/src/subdir.mk
-include gtest/build/CMakeFiles/gtest.dir/src/subdir.mk
-include gtest/build/CMakeFiles/2.8.12.2/CompilerIdCXX/subdir.mk
-include gtest/build/CMakeFiles/2.8.12.2/CompilerIdC/subdir.mk
-include build/CMakeFiles/likedlist.dir/subdir.mk
-include build/CMakeFiles/2.8.12.2/CompilerIdCXX/subdir.mk
-include build/CMakeFiles/2.8.12.2/CompilerIdC/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: LinkedList

# Tool invocations
LinkedList: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -L"/home/bryan/Programming/CPPWorkspace/LinkedList/gtest/make" -o "LinkedList" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CPP_DEPS)$(C_DEPS) LinkedList
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
