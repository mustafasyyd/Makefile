
name := singleton
type := creational

define Pattern
	@echo "Initializing $0..."
	@echo "This is $1 $0"
	@echo "...Checking $0..."
	@echo "It is part of $2 $0"
endef

target1:
	$(call Pattern, $(name) , $(type))
	@g++ -o singleton singleton.cpp
	@./singleton
