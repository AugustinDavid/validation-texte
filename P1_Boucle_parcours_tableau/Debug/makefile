################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: P1_Boucle_parcours_tableau

# Tool invocations
P1_Boucle_parcours_tableau: $(OBJS) $(USER_OBJS)
	gcc  -o "P1_Boucle_parcours_tableau" $(OBJS) $(USER_OBJS) $(LIBS)

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) P1_Boucle_parcours_tableau
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
