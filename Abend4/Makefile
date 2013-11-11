all: slides.pdf

slides.pdf: slides.tex \
	I2C.png \
	i2c-tutorial-master-slave.png \
	i2c-tutorial-slave-master.png \
	i2c-tutorial-star-stop.png \
	multiread.png \
	reg_write.png \
	repeated_start.png \
	beamercolorthemec4.sty \
 	beamerouterthemec4.sty \
 	c4-logo_narr.jpg
	lualatex slides && lualatex slides

clean:
	rm -f slides.aux  slides.log  slides.nav  slides.out  slides.pdf  slides.snm  slides.toc

.PHONY: clean
