################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../DesTest.cpp \
../GetMacAddr.cpp 

OBJS += \
./DesTest.o \
./GetMacAddr.o 

CPP_DEPS += \
./DesTest.d \
./GetMacAddr.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/lzero/jdk1.6.0_32/include -I/home/lzero/jdk1.6.0_32/include/linux -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


