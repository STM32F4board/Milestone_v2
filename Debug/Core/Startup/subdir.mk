################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f446retx.s 

S_DEPS += \
./Core/Startup/startup_stm32f446retx.d 

OBJS += \
./Core/Startup/startup_stm32f446retx.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/startup_stm32f446retx.o: ../Core/Startup/startup_stm32f446retx.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -c -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/classifier" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/DSP/Include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/DSP/PrivateInclude" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/flatbuffers/include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/gemmlowp" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/ruy" -x assembler-with-cpp -MMD -MP -MF"Core/Startup/startup_stm32f446retx.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

