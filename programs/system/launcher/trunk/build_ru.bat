@erase lang.inc
@echo lang fix ru >lang.inc
@fasm launcher.asm launcher
@erase lang.inc
@pause