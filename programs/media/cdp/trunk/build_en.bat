@erase lang.inc
@echo lang fix en >lang.inc
@fasm cdp.asm cdp
@erase lang.inc
@pause