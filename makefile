include src/config.mk

$(TARGET): $(TARGET)
	cd src && $(MAKE)
	mv src/$(TARGET) ./

clean:
	cd src && $(MAKE) clean

recompile:
	cd src && $(MAKE) clean
	rm -f $(TARGET)
	$(MAKE)

.PHONY: clean recompile
