################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Comptage_lettre_dans_fichier_P2.c 

OBJS += \
./src/Comptage_lettre_dans_fichier_P2.o 

C_DEPS += \
./src/Comptage_lettre_dans_fichier_P2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"

