INCDIR=inc
OBJDIR=obj
SRCDIR=src
OUTDIR=bin

STATICFLAG=
STRIPFLAG=

TCPU=

TTDIR=default

CC=$(TCPU)-gcc

MFLAG=$(STATICFLAG) $(STRIPFLAG)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	test  -d $(OBJDIR) || mkdir $(OBJDIR)
	$(CC) -c $< -o $@ $(MFLAG)
% : $(OBJDIR)/%.o
	test  -d $(OUTDIR) || mkdir $(OUTDIR)
	test  -d $(OUTDIR)/$(TTDIR) || mkdir $(OUTDIR)/$(TTDIR)
	test  -d $(OUTDIR)/$(TTDIR)/$(TCPU) || mkdir $(OUTDIR)/$(TTDIR)/$(TCPU)
	$(CC) -o $(OUTDIR)/$(TTDIR)/$(TCPU)/$@.$(TCPU) $^ $(MFLAG)
clean:
	rm $(OUTDIR)/* -r
