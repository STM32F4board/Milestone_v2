################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.c \
../keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.c 

C_DEPS += \
./keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.d \
./keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.d 

OBJS += \
./keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.o \
./keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.o 


# Each subdirectory must supply rules for building sources it contributes
keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.o: ../keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.c keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/classifier" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/DSP/Include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/DSP/PrivateInclude" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/flatbuffers/include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/gemmlowp" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/ruy" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_add_s8.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.o: ../keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.c keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/classifier" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/DSP/Include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/DSP/PrivateInclude" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/flatbuffers/include" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/gemmlowp" -I"E:/Unistudy/Master/rubbish software/Milestone_v2/keyword-spotting-02-v3/edge-impulse-sdk/third_party/ruy" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"keyword-spotting-02-v3/edge-impulse-sdk/CMSIS/NN/Source/BasicMathFunctions/arm_elementwise_mul_s8.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

