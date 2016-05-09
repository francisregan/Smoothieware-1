#!/usr/bin/make

DIRS = src
DIRSCLEAN = $(addsuffix .clean,$(DIRS))

all: $(DIRS)

clean: $(DIRSCLEAN)

$(DIRS):
	@echo Building $@
	@ $(MAKE) -C $@

$(DIRSCLEAN): %.clean:
	@echo =======/mbed/makefile clean:  $* $(DIRSCLEAN)
	@ $(MAKE) -C $*  clean

.PHONY: all clean $(DIRS) $(DIRSCLEAN)
