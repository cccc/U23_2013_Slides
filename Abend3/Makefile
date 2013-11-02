all: slides.pdf

slides.pdf: slides.tex \
	01_funktionsweise.png \
	02_shift.png \
	03_shift.png \
	04_shift.png \
	05_shift.png \
	06_latch.png \
	07_shift.png \
	08_outs.png \
	09_shift.png \
	10_chaining.png \
	11_chaining.png \
	12_chaining.png \
	13_chaining.png \
	14_chaining.png \
	15_latch.png \
	beamercolorthemec4.sty \
 	beamerouterthemec4.sty \
 	c4-logo.jpg
	lualatex slides && lualatex slides

clean:
	rm -f slides.aux  slides.log  slides.nav  slides.out  slides.pdf  slides.snm  slides.toc

.PHONY: clean
