all: slides.pdf

slides.pdf: slides.tex \
	beamercolorthemec4.sty \
 	beamerouterthemec4.sty \
 	c4-logo.jpg
	lualatex slides && lualatex slides

clean:
	rm -f slides.aux  slides.log  slides.nav  slides.out  slides.pdf  slides.snm  slides.toc slides.vrb

.PHONY: clean
