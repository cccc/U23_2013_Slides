all: slides.pdf

slides.pdf: slides.tex \
	Pullup.png \
	Pulldown.png \
	keinpullupdown.png \
	01-timer.png \
	beamercolorthemec4.sty \
 	beamerouterthemec4.sty \
 	c4-logo.jpg
	lualatex slides && lualatex slides

clean:
	rm -f slides.aux  slides.log  slides.nav  slides.out  slides.pdf  slides.snm  slides.toc

.PHONY: clean
