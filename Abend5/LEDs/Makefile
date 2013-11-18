all: slides.pdf

slides.pdf: slides.tex \
	c4-logo.jpg \
	diod.png \
	konst1.png \
	konst2.png \
	led.jpg \
	schalter.png \
	transistor.png \
	vorwid.png \
	beamercolorthemec4.sty \
 	beamerouterthemec4.sty \
 	c4-logo.jpg
	lualatex slides && lualatex slides

clean:
	rm -f slides.aux  slides.log  slides.nav  slides.out  slides.pdf  slides.snm  slides.toc

.PHONY: clean
